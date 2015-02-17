#include "skypeinterface.h"

SkypeInterface::SkypeInterface(QObject *parent) : QObject(parent)
{
    this->init = false;
    if (QDBusConnection::sessionBus().isConnected()) {
        QString skypeServiceName("com.Skype.API");
        //QDBusConnection* dbus = QDBusConnection::connectToBus(QDBusConnection::SessionBus, "CatSkype");
        //this->dbus = dbus;
        //dbus.connect(skypeServiceName, "/com/Skype", "com.Skype.API", "Notify", QStringList(), QString(), this, SLOT(Notify(QString)));
        this->skypeInterface = new QDBusInterface(skypeServiceName, "/com/Skype", "com.Skype.API", QDBusConnection::sessionBus(), this);
    }
}

void SkypeInterface::Attach() {
    QDBusReply<QString> rep = this->_Call(QString("NAME CatSkype"));
    if(rep != "OK") {
        emit skypeRefused();
        return;
    }
    rep = this->_Call(QString("PROTOCOL 8"));
    if(rep != "PROTOCOL 8") {
        emit skypeRefused();
        return;
    }

    new SkypeClientAdapter(this);
    if(!this->skypeInterface->connection().registerObject("/com/Skype/Client", this)) {
        qDebug() << "Register problem";
    }

    this->init = true;
    emit skypeConnected();
}

QDBusReply<QString> SkypeInterface::_Call(const QString& command) {
    QDBusReply<QString> reply;
    if(this->skypeInterface->isValid()) {
        qDebug() << "SKYPE C> " << command;
        reply = this->skypeInterface->call("Invoke", command);
        qDebug() << "SKYPE <R " << reply;

        QRegExp exp("CHATMESSAGE (\\d+) STATUS (\\w+)");
        if(exp.indexIn(reply) != -1) {
            // matched!
            QString id = exp.cap(1);
            QString status = exp.cap(2);
            emit ChatMessageStatus(new ChatMessage(this, id), status);
        }

    } else {
        qDebug() << "Something wrong happened";
    }
    return reply;
}

QString SkypeInterface::Call(const QString& command) {
    if(!this->init) {
        qDebug() << "Must call Init() first";
        return QString();
    } else {
        return (QString)this->_Call(command);
    }
}

QList<User*> SkypeInterface::getFriends() {
    QList<User*> friends;

    QDBusReply<QString> reply = this->_Call("SEARCH FRIENDS");
    QString str = (QString) reply;
    str = str.right(str.length()-6);
    QStringList friendsString = str.split(", ",QString::SkipEmptyParts);
    int i;
    for(i=0;i<friendsString.length();i++) {
        QString handle = friendsString.at(i);
        friends.push_back(new User(this, handle));
    }
    return friends;
}
void SkypeInterface::getGroups() {
    this->Call("SEARCH CHATS");
}

QString SkypeInterface::getFullName(QString handle) {
    QDBusReply<QString> reply = this->_Call(QString("GET USER %1 FULLNAME").arg(handle));
    QString str = (QString) reply;
    QString fullName = str.right(str.length() - (5 + handle.length() + 10));
    if(fullName == "")
        fullName = handle;
    return fullName;
}

QString SkypeInterface::getOnlineStatus(QString handle) {
    QDBusReply<QString> reply = this->_Call(QString("GET USER %1 ONLINESTATUS").arg(handle));
    QString str = (QString) reply;
    QString onlineStatus = str.right(str.length() - (5 + handle.length() + 14));
    if(onlineStatus == "")
        onlineStatus = handle;
    return onlineStatus;
}

void SkypeInterface::Notify(const QString &msg) {
    qDebug() << "SKYPE <N " << msg;
    QRegExp exp("CHATMESSAGE (\\d+) STATUS (\\w+)");
    if(exp.indexIn(msg) != -1) {
        // matched!
        QString id = exp.cap(1);
        QString status = exp.cap(2);
        ChatMessage* cm = new ChatMessage(this, id);
        if(cm->getFromHandle() != this->getProfileHandle())
            emit ChatMessageStatus(cm, status);
    }
    exp.setPattern("USER (\\w+) ONLINESTATUS (\\w+)");
    if(exp.indexIn(msg) != -1) {
        // matched!
        QString handle = exp.cap(1);
        QString status = exp.cap(2);
        emit OnlineStatusChanged(new User(this, handle), status);
    }
    exp.setPattern("CHATS (.+)$");
    if(exp.indexIn(msg) != -1) {
        //matched!
        QString chatIds = exp.cap(1);
        QList<Chat*> chats;
        QStringList chatsString = chatIds.split(", ",QString::SkipEmptyParts);
        int i;
        for(i=0;i<chatsString.length();i++) {
            QString groupId = chatsString.at(i);
            chats.push_back(new Chat(this, groupId));
        }
        emit ChatsReceived(chats);
    }
    emit skypeNotification(msg);
}

SkypeInterface::~SkypeInterface() {
    delete this->skypeInterface;
}

Chat* SkypeInterface::createChatWithUser(User* user) {
    QString reply = this->Call(QString("CHAT CREATE %1").arg(user->getHandle()));
    QRegExp exp("CHAT (.+) STATUS");
    if(exp.indexIn(reply) != -1) {
        // matched
        QString chatId = exp.cap(1);
        qDebug() << "Created chat " << chatId;
        return new Chat(this, chatId);
    }
    qDebug() << "Chat not created :'(";
    throw QString("Blocked user");
}

/*
 * Returns current logged user Handle (= skype account)
 */
QString SkypeInterface::getProfileHandle() {
    QString reply = this->Call("GET CURRENTUSERHANDLE");
    // CURRENTUSERHANDLE <username>
    QString handle = reply.right(reply.length() - 18);
    qDebug() << "PROFILE HANDLE = " << handle;
    return handle;
}



/*
 * Our observer
 */
SkypeClientAdapter::SkypeClientAdapter(SkypeInterface *obj) : QDBusAbstractAdaptor(obj)
{
    client = obj;
}

void SkypeClientAdapter::Notify (const QString &strMessage)
{
    client->Notify(strMessage);
}

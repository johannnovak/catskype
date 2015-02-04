#include "chatmessage.h"
#include "skypeinterface.h"

ChatMessage::ChatMessage(SkypeInterface* sk, QString id)
{
    this->id = id;
    this->skype = sk;
}

QString ChatMessage::get(const QString property) {
    QString reply = this->skype->Call(QString("GET CHATMESSAGE %1 %2").arg(this->id, property));
    return reply.right(reply.length() - (12 + this->id.length() + 1 + property.length() + 1));
}

QString ChatMessage::getId() {
    return this->id;
}

QString ChatMessage::getBody() {
    return this->get("BODY");
}

QDateTime ChatMessage::getTimeStamp() {
    QDateTime qdt;
    QString timestring = this->get("TIMESTAMP");
    int timestamp = timestring.toInt();
    qdt.setTime_t(timestamp);
    return qdt;
}

QString ChatMessage::getFromHandle() {
    return this->get("FROM_HANDLE");
}

QString ChatMessage::getFromDisplayName() {
    return this->get("FROM_DISPNAME");
}

QString ChatMessage::getType() {
    return QString();
}

QString ChatMessage::getStatus() {
    return QString();
}

QString ChatMessage::getChatName() {
    return QString();
}

QList<User*> ChatMessage::getUsers() {
    return QList<User*>();
}

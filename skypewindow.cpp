#include "skypewindow.h"
#include "ui_skypewindow.h"
#include <QDesktopWidget>

SkypeWindow::SkypeWindow(SkypeInterface* sk, QWidget *parent) :
    QMainWindow(parent),ui(new Ui::SkypeWindow)
{
    ui->setupUi(this);
    this->settings = new Settings(this);
    this->skype = sk;
    QList<int> sizes;
    sizes << 250 << 0;
    ui->splitter->setSizes(sizes);
    ui->splitter_2->setSizes(sizes);
    QList<int> sizes2;
    sizes2 << 0 << 250;
    ui->splitter_3->setSizes(sizes2);
    connect(ui->actionSettings, SIGNAL(triggered()), this, SLOT(openSettings()));
    connect(ui->actionRemove_offline, SIGNAL(triggered()), this, SLOT(removeOffline()));
    connect(this->skype, SIGNAL(skypeNotification(QString)), this, SLOT(skypeNotification(QString)));
    connect(this->skype, SIGNAL(ChatMessageStatus(ChatMessage*, QString)), this, SLOT(skypeChatMessageStatus(ChatMessage*, QString)));
    connect(this->skype, SIGNAL(OnlineStatusChanged(User*,QString)), this, SLOT(skypeOnlineStatusChanged(User*,QString)));
    connect(this->skype, SIGNAL(ChatsReceived(QList<Chat*>)), this, SLOT(skypeChatsReceived(QList<Chat*>)));
    TextDocumentImproved* tdi = new TextDocumentImproved();
    ui->msgView->setDocument(tdi);
    ui->msgSend->installEventFilter(this);
    ui->msgView->setReadOnly(true);
}

void SkypeWindow::run() {
    this->skype->getGroups();
    /*ui->contactsView->addItem("Groups");

    ui->contactsView->addItem("Friends");
    QList<User*> friendList = this->skype->getFriends();
    QList<User*>::iterator i;
    for(i=friendList.begin();i!=friendList.end(); ++i) {
        QIcon* icon;
        User* user = (User*)*i;
        QString onlineStatus = user->getOnlineStatus();
        if(onlineStatus == "ONLINE")
            icon = new QIcon(":/icons/online.png");
        if(onlineStatus == "DND")
            icon = new QIcon(":/icons/dnd.png");
        if(onlineStatus == "AWAY")
            icon = new QIcon(":/icons/away.png");
        if(onlineStatus == "OFFLINE")
            icon = new QIcon(":/icons/offline.png");
        ContactListItem* item = new ContactListItem(*icon, user);
        item->setToolTip(QString("(%1) %2").arg(user->getHandle(), user->getMoodText()));
        ui->contactsView->addItem(item);
    }
    this->activeItem = (ContactListItem*)ui->contactsView->item(0);
    //ui->contactsView->sortItems();*/
    this->move(QApplication::desktop()->screen()->rect().center() - this->rect().center());
}

void SkypeWindow::removeOffline() {
    ui->contactsView->clear();
    ui->contactsView->addItem("Groups");

    ui->contactsView->addItem("Friends");
    /*FriendList friendList = this->skype->getFriends();
    FriendList::iterator i;
    for(i=friendList.begin();i!=friendList.end(); ++i) {
        QIcon* icon;
        QString onlineStatus = i.value()["OnlineStatus"];
        if(onlineStatus == "ONLINE")
            icon = new QIcon("online.png");
        if(onlineStatus == "DND")
            icon = new QIcon("dnd.png");
        if(onlineStatus == "AWAY")
            icon = new QIcon("away.png");
        if(onlineStatus == "OFFLINE")
            continue;
        QListWidgetItem* item = new QListWidgetItem(*icon, i.value()["FullName"]);
        ui->contactsView->addItem(item);
    }*/
}
void SkypeWindow::skypeNotification(QString s) {
    this->addMessage(QString("<font color='grey'>%1</font>").arg(s));
}

void SkypeWindow::addMessage(QString s) {
    ui->msgView->setHtml(QString("%1\n%2").arg(ui->msgView->toHtml(), s));
    ui->msgView->verticalScrollBar()->setValue(ui->msgView->verticalScrollBar()->maximum());
}

void SkypeWindow::skypeChatMessageStatus(ChatMessage* cm, QString status) {
    if(status != "SENT" && status != "READ") {
        QString body = cm->getBody();
        if(body.contains(QString("*wizz*"))) {
            this->doWizz();
        }
        this->addMessage(QString("[%1]%2: %3").arg(cm->getTimeStamp().toString("hh:mm:ss"), cm->getFromDisplayName(), body));
    }

}

void SkypeWindow::skypeChatsReceived(QList<Chat *> groups) {
    ui->contactsView->clear();
    ui->contactsView->addItem("Groups");
    QList<Chat*>::iterator g;
    for(g=groups.begin();g!=groups.end();++g) {
        Chat* group = (Chat*)*g;
        QIcon icon(":/icons/group.png");
        GroupListItem* item = new GroupListItem(icon, group);
        ui->contactsView->addItem(item);
    }
    ui->contactsView->addItem("Friends");
    QList<User*> friendList = this->skype->getFriends();
    QList<User*>::iterator i;
    for(i=friendList.begin();i!=friendList.end(); ++i) {
        QIcon* icon;
        User* user = (User*)*i;
        QString onlineStatus = user->getOnlineStatus();
        if(onlineStatus == "ONLINE")
            icon = new QIcon(":/icons/online.png");
        if(onlineStatus == "DND")
            icon = new QIcon(":/icons/dnd.png");
        if(onlineStatus == "AWAY")
            icon = new QIcon(":/icons/away.png");
        if(onlineStatus == "OFFLINE")
            icon = new QIcon(":/icons/offline.png");
        ContactListItem* item = new ContactListItem(*icon, user);
        item->setToolTip(QString("(%1) %2").arg(user->getHandle(), user->getMoodText()));
        ui->contactsView->addItem(item);
    }
    this->activeItem = (ContactListItem*)ui->contactsView->item(0);
}


bool SkypeWindow::eventFilter(QObject *object, QEvent *event)
{
    if (object == ui->msgSend && event->type() == QEvent::KeyPress)
    {
        QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
        if (keyEvent->key() == Qt::Key_Enter)
        {
            // Special tab handling
            Chat* c = this->skype->createChatWithUser(this->activeItem->getUser());
            c->sendMessage("<font color=\""+this->settings->getColor().name()+"\">"+ui->msgSend->toPlainText()+"</font>");
            //ui->msgSend->toPlainText());
            ui->msgSend->setHtml("");
            return true;
        }
        else
        {
            return QMainWindow::eventFilter(object, event);
        }
    }
    else
    {
        return QMainWindow::eventFilter(object, event);
    }
}

void SkypeWindow::skypeOnlineStatusChanged(User* u, QString status) {
    QString fullname = u->getFullname();
    ui->contactsView->findItems(fullname,Qt::MatchCaseSensitive).at(0)->setIcon(QIcon(":/icons/"+status.toLower()+".png"));
}

void SkypeWindow::doWizz() {
    int x0 = this->geometry().topLeft().x();
    int y0 = this->geometry().topLeft().y();
    int radius = 50;

    // loop
    QList<QPoint> pts;
    int x = radius;
    int y = 0;
    int radiusError = 1-x;
    while(x >= y)
    {
        pts << QPoint(x0-x, y0+y);
        pts << QPoint(x0+x, y0+y);
        pts << QPoint(x0+x, y0-y);
        pts << QPoint(x0-x, y0-y);
        y++;
        if (radiusError<0)
        {
          radiusError += 2 * y + 1;
        }
        else
        {
          x--;
          radiusError += 2 * (y - x) + 1;
        }
    }
    QList<QPoint>::iterator i;
    int cnt=0;
    for(i=pts.begin();i!=pts.end();++i) {
        if(cnt >= 20)
            break;
        QPoint p = *i;
        this->move(p.x(), p.y());
        QThread::msleep(25);
        cnt++;
    }
}

void SkypeWindow::on_contactsView_itemClicked(QListWidgetItem *item)
{
    if(item->text() != "Friends" && item->text() != "Groups") {
        ContactListItem* i = (ContactListItem*)item;
        this->activeItem = i;
        qDebug() << "Clicked on " << i->getUser()->getHandle();
    }
}
void SkypeWindow::openSettings() {
    qDebug() << "Settings shown";
    this->settings->show();
}

SkypeWindow::~SkypeWindow()
{
}

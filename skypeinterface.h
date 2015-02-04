#ifndef SKYPEINTERFACE_H
#define SKYPEINTERFACE_H

#include <QObject>
#include <QDBusConnection>
#include <QDBusReply>
#include <QDBusInterface>
#include <QDebug>
#include <QDBusAbstractAdaptor>
#include <QRegExp>
#include "user.h"
#include "chatmessage.h"
#include "chat.h"

class SkypeInterface;

class SkypeClientAdapter : public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.Skype.API.Client")

public:
    SkypeClientAdapter(SkypeInterface *obj);

public slots:
    Q_NOREPLY void Notify (const QString &strMessage);

private:
    SkypeInterface *client;
};

class SkypeInterface : public QObject
{
    Q_OBJECT
private:
    QDBusInterface* skypeInterface;
    bool init;
    QDBusReply<QString> _Call(const QString&);
public:
    explicit SkypeInterface(QObject *parent = 0);
    void Attach();
    QString Call(const QString&);
    QList<User*> getFriends();
    void getGroups();
    QString getFullName(QString handle);
    QString getOnlineStatus(QString handle);
    Chat* createChatWithUser(User* username);
    ~SkypeInterface();

signals:
    void skypeConnected() const;
    void skypeRefused() const;
    void skypeNotification(const QString& msg) const;
    //void CallStatusChanged(Call, Status) const;
    //void ChatMembersChanged(Chat, Members) const;
    void ChatMessageStatus(ChatMessage*, QString) const;
    void OnlineStatusChanged(User*, QString) const;
    void ChatsReceived(QList<Chat*>) const;
public slots:
    void Notify(const QString& msg);
};

#endif // SKYPEINTERFACE_H

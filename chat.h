#ifndef CHAT_H
#define CHAT_H

#include <QList>
#include <QString>
#include <QDateTime>
#include "user.h"
#include "chattab.h"
#include "chatmessage.h"

class Chat
{
public:
    Chat(SkypeInterface*,QString);
    void sendMessage(const QString);
    QString getId();
    QDateTime getCreationDate();
    User* getAdder();
    QString getStatus();
    QList<User*> getPosters();
    QList<User*> getMembers();
    QString getTopic();
    QList<ChatMessage*> getChatMessages();
    QList<User*> getActiveMembers();
    QString getFriendlyName();
    QList<ChatMessage*> getRecentChatMessages();
private:
    ChatTab* tab;
    SkypeInterface* skype;
    QString id;
    QString get(const QString);


};

#endif // CHAT_H

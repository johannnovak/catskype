#ifndef CHATMESSAGE_H
#define CHATMESSAGE_H

#include <QString>
#include <QList>
#include <QDateTime>
#include "user.h"

class ChatMessage
{
public:
    ChatMessage(SkypeInterface*, QString id);
    QString getId();
    QString getBody();
    QDateTime getTimeStamp();
    QString getFromHandle();
    QString getFromDisplayName();
    QString getType();
    QString getStatus();
    QString getChatName();
    QList<User*> getUsers();
private:
    QString id;
    SkypeInterface* skype;
    QString get(const QString property);
};

#endif // CHATMESSAGE_H

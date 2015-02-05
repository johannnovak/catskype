#ifndef CONTACTLISTITEM_H
#define CONTACTLISTITEM_H

#include <QListWidgetItem>
#include "chat.h"

class ChatListItem : public QListWidgetItem
{
public:
    ChatListItem(Chat*);
    ChatListItem(QIcon&, Chat*);
    Chat* getChat();
    QString getMessages();
private:
    Chat* chat;
};

#endif // CONTACTLISTITEM_H

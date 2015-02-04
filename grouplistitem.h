#ifndef GROUPLISTITEM_H
#define GROUPLISTITEM_H

#include <QListWidgetItem>
#include "group.h"

class GroupListItem : public QListWidgetItem
{
public:
    GroupListItem(Chat*);
    GroupListItem(QIcon&, Chat*);
    Chat* getChat();
private:
    Chat* chat;
};

#endif // GROUPLISTITEM_H

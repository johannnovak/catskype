#include "grouplistitem.h"

/*
 * Same as ContactListItem but for Chats (= group conversations)
 */

GroupListItem::GroupListItem(Chat* c) : QListWidgetItem(c->getFriendlyName())
{
    this->chat = c;
}

GroupListItem::GroupListItem(QIcon &icon, Chat *c) : QListWidgetItem(icon, c->getFriendlyName())
{
    this->chat = c;
}

Chat* GroupListItem::getChat() {
    return this->chat;
}

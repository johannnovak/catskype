#include "chatlistitem.h"

/*
 * Represents an item in the contacts list.
 * Inherits from QListWidgetItem so it's displayable
 */
ChatListItem::ChatListItem(Chat* c) : QListWidgetItem(c->getFriendlyName())
{
    this->chat = c;
}

ChatListItem::ChatListItem(QIcon &icon, Chat* c) : QListWidgetItem(icon, c->getFriendlyName())
{
    this->chat = c;
}

Chat* ChatListItem::getChat() {
    return this->chat;
}

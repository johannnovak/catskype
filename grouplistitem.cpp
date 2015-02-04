#include "grouplistitem.h"

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

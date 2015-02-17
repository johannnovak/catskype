#include "chatlistitem.h"

/*
 * Represents an item in the contacts list.
 * Inherits from QListWidgetItem so it's displayable
 */
ChatListItem::ChatListItem(Chat* c) :
    QListWidgetItem(c->getStatus() == "MULTI_SUBSCRIBED" ? c->getTopic() : c->getFriendlyName())
{
    this->chat = c;
    this->conversationString = "";
}

ChatListItem::ChatListItem(QIcon &icon, Chat* c) :
    QListWidgetItem(icon,c->getStatus() == "MULTI_SUBSCRIBED" ? c->getTopic() : c->getFriendlyName())
{
    this->chat = c;
    this->conversationString = "";
}

Chat* ChatListItem::getChat() {
    return this->chat;
}

QString ChatListItem::getConversationString() {
    return this->conversationString;
}

void ChatListItem::setConversationString(QString s) {
    this->conversationString = s;
}

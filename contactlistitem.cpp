#include "contactlistitem.h"

/*
 * Represents an item in the contacts list.
 * Inherits from QListWidgetItem so it's displayable
 */
ContactListItem::ContactListItem(User* u) : QListWidgetItem(u->getFullname())
{
    this->user = u;
}

ContactListItem::ContactListItem(QIcon &icon, User* u) : QListWidgetItem(icon, u->getFullname())
{
    this->user = u;
}

User* ContactListItem::getUser() {
    return this->user;
}

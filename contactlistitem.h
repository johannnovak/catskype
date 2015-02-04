#ifndef CONTACTLISTITEM_H
#define CONTACTLISTITEM_H

#include <QListWidgetItem>
#include "user.h"

class ContactListItem : public QListWidgetItem
{
public:
    ContactListItem(User*);
    ContactListItem(QIcon&, User*);
    User* getUser();
private:
    User* user;
};

#endif // CONTACTLISTITEM_H

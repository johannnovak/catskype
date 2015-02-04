#ifndef CONTACTLISTITEMABLE_H
#define CONTACTLISTITEMABLE_H

#include "chat.h"

class ContactListItemable
{
public:
    ContactListItemable(int);
    int getType();
    Chat* getChat();
private:
    int type;
};

#endif // CONTACTLISTITEMABLE_H

#include "contactlistitemable.h"

ContactListItemable::ContactListItemable(int type)
{
    this->type = type;
}

Chat* ContactListItemable::getChat() {
    if(this->type == 0) {
        // user
        //return this->
    }
    if(this->type == 1) {
        // group
    }

}

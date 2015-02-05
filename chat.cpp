#include "chat.h"
#include "skypeinterface.h"

/*
* Represents a Chat object (group conversation)
*/


/*
 * Arguments are:
 * - SkypeInterface*: used in get methods
 * - QString: the call Id given by Skype
 */
Chat::Chat(SkypeInterface* sk, QString id)
{
    this->skype = sk;
    this->id = id;
}

/*
 * Dummy chat instance for blocked people
 */
Chat::Chat() {
    // dummy chat instance for blocked people
}

/*
 * Gets a Chat property from Skype by sending a GET CHAT <id> <property>
 * Returns a QString of the requested property
 */
QString Chat::get(const QString property) {
    QString reply = this->skype->Call(QString("GET CHAT %1 %2").arg(this->id, property));
    return reply.right(reply.length() - (5 + this->id.length() + 1 + property.length() + 1));
}

/*
 * Returns the Id of this Chat instance
 */
QString Chat::getId() {
    return this->id;
}

/*
 * Returns a QDateTime of the Chat creation date
 * GET CHAT <id> TIMESTAMP
 */
QDateTime Chat::getCreationDate() {
    QDateTime qdt;
    QString timestring = this->get("TIMESTAMP");
    int timestamp = timestring.toInt();
    qdt.setTime_t(timestamp);
    return qdt;
}

/*
 * Returns the User who added the currently logged user to this particular Chat
 * GET CHAT <id> ADDER
 */
User* Chat::getAdder() {
    return new User(this->skype, this->get("ADDER"));
}

/*
 * Returns the Chat status
 * GET CHAT <id> STATUS
 */

QString Chat::getStatus() {
    return this->get("STATUS");
}

/*
 * Returns a list of User who posted in this particular Chat
 * GET CHAT <id> POSTERS
 * Not yet implemented
 */
QList<User*> Chat::getPosters() {
    QList<User*> users;
    QString rep = this->get("POSTERS");
    QStringList repList = rep.split(", ");
    int i;
    for (i=0;i<repList.length();i++) {
        users.push_back(new User(this->skype, repList.at(i)));
    }
    return users;
}

/*
 * Returns a list of User who are members of this Chat
 * GET CHAT <id> MEMBERS
 * Not yet implemented
 */
QList<User*> Chat::getMembers() {
    QList<User*> users;
    QString rep = this->get("MEMBERS");
    QStringList repList = rep.split(", ");
    int i;
    for (i=0;i<repList.length();i++) {
        users.push_back(new User(this->skype, repList.at(i)));
    }
    return users;
}

/*
 * Returns a QString of the chat's topic
 * GET CHAT <id> TOPIC
 */
QString Chat::getTopic() {
    return this->get("TOPIC");
}

/*
 * Returns a list of ChatMessage that this Chat contains
 * GET CHAT <id> CHATMESSAGES
 * Not yet implemented: need to test how many chatmessages are returned
 */
QList<ChatMessage*> Chat::getChatMessages() {
    QList<ChatMessage*> messages;
    return messages;
}

/*
 * Returns a list of User who are active members of this Chat
 * GET CHAT <id> ACTIVEMEMBERS
 * Not yet implemented
 */
QList<User*> Chat::getActiveMembers() {
    QList<User*> users;
    QString rep = this->get("ACTIVEMEMBERS");
    QStringList repList = rep.split(", ");
    int i;
    for (i=0;i<repList.length();i++) {
        users.push_back(new User(this->skype, repList.at(i)));
    }
    return users;
}

/*
 * Returns a QString of the chat's friendly name
 * GET CHAT <id> FRIENDLYNAME
 */
QString Chat::getFriendlyName() {
    return this->get("FRIENDLYNAME");
}

/*
 * Returns a list of ChatMessage which are the most recent
 * GET CHAT <id> RECENTCHATMESSAGES
 * Not yet implemented
 */
QList<ChatMessage*> Chat::getRecentChatMessages() {
    QList<ChatMessage*> messages;
    return messages;
}

/*
 * Sends a message in this Chat
 */
void Chat::sendMessage(const QString msg) {
    this->skype->Call(QString("CHATMESSAGE %1 %2").arg(this->id, msg));
}

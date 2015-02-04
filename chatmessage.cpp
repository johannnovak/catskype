#include "chatmessage.h"
#include "skypeinterface.h"

/*
 * Represents a ChatMessage object (= a message)
 */


/*
 * Arguments are :
 * - SkypeInterface*: used in getters
 * - QString: id of the ChatMessage
 */
ChatMessage::ChatMessage(SkypeInterface* sk, QString id)
{
    this->id = id;
    this->skype = sk;
}

/*
 * Gets a ChatMessage property from Skype by sending a GET CHATMESSAGE <id> <property>
 * Returns a QString of the requested property
 */
QString ChatMessage::get(const QString property) {
    QString reply = this->skype->Call(QString("GET CHATMESSAGE %1 %2").arg(this->id, property));
    return reply.right(reply.length() - (12 + this->id.length() + 1 + property.length() + 1));
}

/*
 * Returns the Id of the ChatMessage
 */
QString ChatMessage::getId() {
    return this->id;
}

/*
 * Returns the Body (message itself) of the ChatMessage
 * GET CHATMESSAGE <id> BODY
 */
QString ChatMessage::getBody() {
    return this->get("BODY");
}

/*
 * Returns a QDateTime of the time at which the message was sent
 * GET CHATMESSAGE <id> TIMESTAMP
 */
QDateTime ChatMessage::getTimeStamp() {
    QDateTime qdt;
    QString timestring = this->get("TIMESTAMP");
    int timestamp = timestring.toInt();
    qdt.setTime_t(timestamp);
    return qdt;
}

/*
 * Returns the Handle (= Skype account) of the sender
 * GET CHATMESSAGE <id> FROM_HANDLE
 */
QString ChatMessage::getFromHandle() {
    return this->get("FROM_HANDLE");
}

/*
 * Returns the FullName (= Skype display name) of the sender
 * GET CHATMESSAGE <id> FROM_DISPLAYNAME
 */
QString ChatMessage::getFromDisplayName() {
    return this->get("FROM_DISPNAME");
}

/*
 * Returns the type of the ChatMessage
 * GET CHATMESSAGE <id> TYPE
 * Not yet implemented
 */
QString ChatMessage::getType() {
    return QString();
}

/*
 * Returns the Status of the ChatMessage (SENDING, SENT, RECEIVED)
 * GET CHATMESSAGE <id> STATUS
 * Not yet implemented
 */
QString ChatMessage::getStatus() {
    return QString();
}

/*
 * Returns the name of the chat containing the chatmessage
 * GET CHATMESSAGE <id> CHATNAME
 * Not yet implemented
 */
QString ChatMessage::getChatName() {
    return QString();
}

/*
 * Returns a list of User to which the message was sent
 * GET CHATMESSAGE <id> USERS
 * Not yet implemented
 */
QList<User*> ChatMessage::getUsers() {
    return QList<User*>();
}

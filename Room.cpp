#include "Room.h"

Room::Room(string description, string longDescription, int roomNumber, bool hasItem)
    : Entity(description, longDescription, roomNumber), hasItem(hasItem) {}

Room::Room(const Room& original) : Entity(original){}

Item* Room::getItem() const{
    return item;
}
void Room::setExits(Room *north, Room *east, Room *south, Room *west) {
    if (north != NULL)
        exits["north"] = north;
    if (east != NULL)
        exits["east"] = east;
    if (south != NULL)
        exits["south"] = south;
    if (west != NULL)
        exits["west"] = west;
}
string Room::exitString() {
    string returnString = "\nexits =";
    for (map<string, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
        // Loop through map
        returnString += "  " + i->first;
    return returnString;
}

Room* Room::nextRoom(string direction) {
    map<string, Room*>::iterator next = exits.find(direction);
    if (next == exits.end())
        return NULL;
    return next->second;
}

void Room::addItem(Item *inItem) {
    item = inItem;
}
bool Room::getHasItem(){
    return hasItem;
}
void Room::setHasItem(bool hasAnItem){
    hasItem = hasAnItem;
}

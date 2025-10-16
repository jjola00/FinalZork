#include "Room.h"

Room::Room(string description, string longDescription, int roomNumber, bool hasItem)
    : Entity(description, longDescription, roomNumber), hasItem(hasItem) {}

Item* Room::getItem() const{
    return item;
}
void Room::setExits(Room *north, Room *east, Room *south, Room *west) {
    if (north != nullptr) exits["north"] = north;
    if (east != nullptr)  exits["east"] = east;
    if (south != nullptr) exits["south"] = south;
    if (west != nullptr)  exits["west"] = west;
}
string Room::exitString() {
    string returnString = "\nexits =";
    for (map<string, Room*>::iterator i = exits.begin(); i != exits.end(); i++)
        returnString += "  " + i->first;
    return returnString;
}

Room* Room::nextRoom(string direction) {
    map<string, Room*>::iterator next = exits.find(direction);
    if (next == exits.end())
        return nullptr;
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

#include "Inventory.h"
#include "ZorkUL.h"
#include <vector>


Inventory::Inventory(std::string itemDescription,  std::string itemLongDescription, std::string roomName)
    : Item(itemDescription, itemLongDescription), Room(roomName) {
    this->description = itemDescription;
    this->longDescription = itemLongDescription;
    this->roomName = roomName;
}
string Inventory::getDescription() const{
    return description;
}
string Inventory::getLongDescription() const{
    return longDescription;
}
string Inventory::getRoomName() const{
    return roomName;
}
void Inventory::addItem(string description, string longDescription, string roomDescription) {
    Inventory newItem(description, longDescription, roomDescription);
    itemList.push_back(newItem);
}
string Inventory::toString(vector <Inventory> itemList){
    std::string result;
    for (const auto& item : itemList) {
        result += item.getDescription() + "\n" + item.getLongDescription() + "\nThis item was found in" + item.getRoomName()  + "\n\n\n";
    }
    return result;
}

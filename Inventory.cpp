#include "Inventory.h"


using namespace std;
Inventory::Inventory(string itemDescription,string itemLongDescription, string roomName) {
    this->description = itemDescription;
    this->longDescription = itemLongDescription;
    this->roomName = roomName;
}
Inventory::Inventory(){

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
        result += item.getDescription() + "\n" + item.getLongDescription() +
                  "\nThis item was found in " + item.getRoomName()  + "\n\n";
    }
    return result;
}
 vector <Inventory> Inventory::getItemList() const{
    return itemList;
}

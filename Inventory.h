#ifndef INVENTORY_H
#define INVENTORY_H

#include "Room.h"

using namespace std;
class Inventory
{
private:
    string roomName;
    string description;
    string longDescription;
    vector <Inventory> itemList;

public:
    Inventory(string roomName, string itemDescription, string itemLongDescription);
    Inventory();
    string toString(vector <Inventory> itemsInRoom);
    void addItem(string description, string longDescription, string roomDescription);
    string getRoomName() const;
    string getDescription() const;
    string getLongDescription() const;
    vector <Inventory> getItemList();
};
#endif // INVENTORY_H

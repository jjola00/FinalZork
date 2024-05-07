#ifndef INVENTORY_H
#define INVENTORY_H

#include "item.h"
#include "Room.h"

using namespace std;
class Inventory: public Item, public Room
{
private:
    string roomName;
    string description;
    string longDescription;
    vector <Inventory> itemList;

public:
    Inventory(string roomName, string itemDescription, string itemLongDescription);
    string toString(vector <Inventory> itemsInRoom);
    void addItem(string description, string longDescription, string roomDescription);

    string getRoomName() const;
    string getDescription() const;
    string getLongDescription() const;
    vector <Inventory> getItemList();
};
#endif // INVENTORY_H

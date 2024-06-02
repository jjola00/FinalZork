#ifndef INVENTORY_H
#define INVENTORY_H

#include <string>
#include <vector>

using namespace std;

class Inventory
{
private:
    string description;
    string longDescription;
    string roomName;
    vector<Inventory> itemList;

public:
    Inventory(string itemDescription, string itemLongDescription, string roomName);
    Inventory();

    Inventory(const Inventory& other);

    Inventory& operator=(const Inventory& other);

    string toString(vector<Inventory> itemsInRoom);
    void addItem(string description, string longDescription, string roomDescription);

    string getRoomName() const;
    string getDescription() const;
    string getLongDescription() const;
    vector<Inventory> getItemList() const;
};

#endif // INVENTORY_H

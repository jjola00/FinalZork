#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "item.h"
using namespace std;
using std::vector;

class Room {

private:
    string description;
    int roomNumber;
    map<string, Room*> exits;
    string exitString();
    vector <Item> itemsInRoom;
    bool hasItem;

public:
    int numberOfItems();
    Room(string description, int number, bool hasItem);
    Room(string description);
    Room* nextRoom(string direction);
    string displayItem();
    int isItemInRoom(string inString);
    void addItem(Item *inItem);
    void removeItemFromRoom(int location);

    int getRoomNumber() const;
    bool getHasItem();
    string getDescription() const;
    vector <Item> getItemList();

    void setExits(Room *north, Room *east, Room *south, Room *west);
    void setHasItem(bool hasItem);
};

#endif

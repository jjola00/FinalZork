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


public:
    int numberOfItems();
    Room(string description, int number);
    int getRoomNumber() const;
    string getDescription() const;
    void setExits(Room *north, Room *east, Room *south, Room *west);
    Room* nextRoom(string direction);
    void addItem(Item *inItem);
    string displayItem();
    int isItemInRoom(string inString);
    void removeItemFromRoom(int location);
};

#endif

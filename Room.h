#ifndef ROOM_H_
#define ROOM_H_

#include <map>
#include <string>
#include <vector>
#include "item.h"
using namespace std;
using std::vector;

class Room : public Entity {
private:
    map<string, Room*> exits;
    string exitString();
    bool hasItem;
    Item* item;

public:
    Room(string description, int number, bool hasItem);
    Room(const Room& original);
    Room* nextRoom(string direction);
    void addItem(Item *inItem);

    bool getHasItem();
    Item* getItem() const;

    void setExits(Room *north, Room *east, Room *south, Room *west);
    void setHasItem(bool hasItem);
};

#endif

#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "Room.h"
#include "item.h"
#include <string>
#include <QObject>

using namespace std;

class ZorkUL {
private:
    vector<Room*> rooms;
    vector<Item*> items;

    void createRooms();
    Room *currentRoom;
    Item *currentItem;
    void printWelcome();
    void printHelp();
    void createItems();
    void displayItems();


public:
    ZorkUL();
    ~ZorkUL();
    void play();
    Room* getCurrentRoom() const;
    Item* getCurrentItem() const;
    void setCurrentRoom(Room* room);
    void setCurrentItem(Item* item);
    string go(string direction);

    friend class MainWindow;
};


#endif /*ZORKUL_H_*/

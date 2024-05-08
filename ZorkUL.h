#ifndef ZORKUL_H_
#define ZORKUL_H_

#include "Command.h"
#include "Parser.h"
#include "Room.h"
#include "item.h"
#include "mainwindow.h"
#include <iostream>
#include <string>
#include <QObject>

using namespace std;

class ZorkUL {
private:
    Parser parser;
    Room *currentRoom;
    Item *currentItem;
    void printWelcome();
    bool processCommand(Command command);
    void printHelp();
    void goRoom(Command command);
    void createItems();
    void displayItems();


public:
    ZorkUL();
    void play();
    Room* getCurrentRoom() const;
    Item* getCurrentItem() const;
    void setCurrentRoom(Room* room);
    void setCurrentItem(Item* item);
    void createRooms();
    string go(string direction);
};


#endif /*ZORKUL_H_*/

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
    friend class Inventory;
    Parser parser;
    Room *currentRoom;
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
    void setCurrentRoom(Room* room);
    void createRooms();
    string go(string direction);
};


#endif /*ZORKUL_H_*/

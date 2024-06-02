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

    string q1 = "Who was the killer?";
    string q2 = "Who was the survivor?";
    string q3 = "Who was killed?";
    string EndingQuestions[3];


public:
    ZorkUL();
    ~ZorkUL();
    void play();
    Room* getCurrentRoom() const;
    Item* getCurrentItem() const;
    void setCurrentRoom(Room* room);
    void setCurrentItem(Item* item);
    string go(string direction);
    string* getQuestionList();
};


#endif /*ZORKUL_H_*/

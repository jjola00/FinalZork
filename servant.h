#ifndef SERVANT_H
#define SERVANT_H

#include "character.h"
#include "entity.h"

class Servant: public Character, public Entity{
public:
    Servant(string name, string description, int value);
    Servant();
    string speak(unsigned int x) override;
    string room1();
    string room2();
    string room3();
    string room4();
    string room5();
    string room6();
    string room7();
    string room8();
    string room9();
    string room10();
    string room11();
    string room12();
};

#endif // SERVANT_H

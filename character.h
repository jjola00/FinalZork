#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character
{
public:
    Character();
    virtual string speak(int x) = 0;
};
#endif // CHARACTER_H

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character
{
public:
    Character();
    virtual string speak(unsigned int x) = 0;
    virtual ~Character() = default;
};
#endif // CHARACTER_H

#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character
{
protected:
    virtual string speak(unsigned int x) = 0;

public:
    Character();
    virtual ~Character() = default;
};
#endif // CHARACTER_H

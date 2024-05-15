#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character
{
protected:
    virtual string room1() = 0;
    virtual string room2() = 0;
    virtual string room3() = 0;
    virtual string room4() = 0;
    virtual string room5() = 0;
    virtual string room6() = 0;
    virtual string room7() = 0;
    virtual string room8() = 0;
    virtual string room9() = 0;
    virtual string room10() = 0;
    virtual string room11() = 0;
    virtual string room12() = 0;
public:
    Character();
    virtual ~Character() = default;
};
#endif // CHARACTER_H

#ifndef SERVANT_H
#define SERVANT_H

#include "character.h"
#include "entity.h"

namespace Servant{
class Servant: public Character<Servant>, public Entity{
public:
    Servant();
    string room1() override;
    string room2() override;
    string room3() override;
    string room4() override;
    string room5() override;
    string room6() override;
    string room7() override;
    string room8() override;
    string room9() override;
    string room10() override;
    string room11() override;
    string room12() override;
};
}
#endif // SERVANT_H

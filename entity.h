#ifndef ENTITY_H
#define ENTITY_H
#include <string>

using namespace std;
class Entity
{
private:
    string name;
    string description;
public:
    Entity(string name, string description);
};

#endif // ENTITY_H

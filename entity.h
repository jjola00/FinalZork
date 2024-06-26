#ifndef ENTITY_H
#define ENTITY_H
#include <string>

using namespace std;
class Entity
{
private:
    string name;
    string description;
    int value;
    bool has;
public:
    Entity(string name, string description, int value);
    Entity(string name, int value);
    Entity();

    string getName() const;
    string getDescription() const;
    int getValue() const;

    void setName(string name);
    void setDescription(string description);
    void setValue(int value);
};

#endif

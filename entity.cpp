#include "entity.h"


Entity::Entity(string name, string description, int value)
    : name(name), description(description), value(value) {}

Entity::Entity(string name, int value)
    : name(name), value(value) {}

Entity::Entity(){}

string Entity::getName() const{
    return name;
}
string Entity::getDescription() const{
    return description;
}
int Entity::getValue() const{
    return value;
}

void Entity::setName(string name){
    this->name = name;
}
void Entity::setDescription(string description){
    this->description = description;
}
void Entity::setValue(int value){
    this->value = value;
}

#include "entity.h"


Entity::Entity(string name, string description, int value) {
    this->name = name;
    this->description = description;
    this->value = value;
}
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

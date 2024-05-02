#include "Character.h"
#include "item.h"

Character::Character(string description) {
    this->description = description;
}
void Character::addItems(string item) {
    itemsInCharacter.push_back(item);
}



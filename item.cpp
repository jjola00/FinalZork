#include "item.h"

Item::Item (string inDescription, int inValue, string inLongDescription) :
    Entity(inDescription, inLongDescription, inValue){}

string Item::itemNotification(int x){
    if (x == 1){
        return "Room contains a Painting.";
    }
    return "Room does not contain an item.";
}


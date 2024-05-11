#include "item.h"

Item::Item (string inDescription, int inValue, string inLongDescription) :
    Entity(inDescription, inLongDescription, inValue){}

Item::Item(const Item& original) : Entity(original){}

string Item::itemNotification(int x){
    if (x == 1){
        return "Room contains a Painting.";
    }
    return "Room does not contain an item.";
}
template<typename T>
void Item::interactWithItem(T action){
    if constexpr (std::is_same_v<T, std::string>) {
        action = getDescription();
    }

}


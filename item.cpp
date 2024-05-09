#include "item.h"
#include <iostream>

Item::Item (string inDescription, int inValue, string inLongDescription) {
    description = inDescription;
    value = inValue;
    longDescription = inLongDescription;
}

void Item::setValue(int inValue)
{
    if (inValue > 9999 || inValue < 0)
        cout << "value invalid, must be 0<value<9999" ;
    else
        value = inValue;
}
int Item::getValue() const{
    return value;
}
string Item::itemNotification(int x){
    if (x == 1){
        return "Room contains a Painting.";
    }
    return "Room does not contain an item.";
}
string Item::getLongDescription() const{
    return longDescription;
}
string Item::getDescription() const{
    return description;
}
template<typename T>
void Item::interactWithItem(T action){
    if constexpr (std::is_same_v<T, std::string>) {
        action = getLongDescription();
    }

}


#include "item.h"

Item::Item (string inDescription, float inValue, string inLongDescription) {
    description = inDescription;
    value = inValue;
    longDescription = inLongDescription;
}


void Item::setValue(float inValue)
{
    if (inValue > 9999 || inValue < 0)
        cout << "value invalid, must be 0<value<9999" ;
    else
        value = inValue;
}
std::string Item::itemNotification(){
    return "Room does not contain an item.";
}
std::string RoomItem::itemNotification() {
    return "Room contains a Painting.";
}
std::string Item::getLongDescription(){
    return longDescription;
}
template<typename T>
void Item::interactWithItem(T action){
    if constexpr (std::is_same_v<T, std::string>) {
        action = getLongDescription();
    }

}


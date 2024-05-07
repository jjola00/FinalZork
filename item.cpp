#include "item.h"

Item::Item (string inDescription, float inValue, string inLongDescription) {
    description = inDescription;
    value = inValue;
    longDescription = inLongDescription;
}
Item::Item (string inDescription, string inLongDescription) {
    description = inDescription;
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
    return "This room contains a Painting.";
}
std::string Item::getLongDescription() const{
    return longDescription;
}
std::string Item::getDescription() const{
    return description;
}
template<typename T>
void Item::interactWithItem(T action){
    if constexpr (std::is_same_v<T, std::string>) {
        action = getLongDescription();
    }

}


#include "item.h"

Item::Item (string inDescription, float inValue) {
    description = inDescription;
    value = inValue;
}

Item::Item(string inDescription) {
    description = inDescription;
}

void Item::setValue(float inValue)
{
    if (inValue > 9999 || inValue < 0)
        cout << "value invalid, must be 0<value<9999" ;
    else
        value = inValue;
}
string Item::getShortDescription()
{
    return description;
}

string Item::getLongDescription()
{
    return " item(s), " + description + ".\n";
}


#ifndef ITEM_H_
#define ITEM_H_

#include <string>
#include "entity.h"

using namespace std;

class Item : public Entity {
public:
    Item(string description, int inValue, string longDescription);
    Item(const Item& original);

    string itemNotification(int x);
};
#endif /*ITEM_H_*/

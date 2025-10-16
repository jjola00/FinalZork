#ifndef ITEM_H_
#define ITEM_H_

#include <string>
#include "entity.h"

using namespace std;

class Item : public Entity {
public:
    Item(string description, int inValue, string longDescription);

    string itemNotification(bool hasItem);
};
#endif

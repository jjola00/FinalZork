#ifndef ITEM_H_
#define ITEM_H_

#include <map>
#include <string>
#include <iostream>
using namespace std;

class Item {
private:
    string description;
    float value;

public:
    Item (string description, float inValue);
    float getValue();
    void setValue(float value);
};

#endif /*ITEM_H_*/

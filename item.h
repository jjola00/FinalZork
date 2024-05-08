#ifndef ITEM_H_
#define ITEM_H_

#include <map>
#include <string>
#include <iostream>
using namespace std;

class Item {
private:
    string description;
    string longDescription;
    int value;

public:
    Item(string description, int inValue, string longDescription);
    int getValue() const;
    string getLongDescription() const;
    string getDescription() const;
    void setValue(int value);
    virtual string itemNotification();
    template<typename T>
    void interactWithItem(T interaction);
};
class RoomItem : public Item {
public:
    RoomItem(string description, int inValue, string longDescription) : Item(description, inValue, longDescription) {}
    string itemNotification() override;
};
#endif /*ITEM_H_*/

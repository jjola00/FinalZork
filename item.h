#ifndef ITEM_H_
#define ITEM_H_

#include <string>

using namespace std;

class Item {
private:
    string description;
    string longDescription;
    unsigned int value = 3;

public:
    Item(string description, int inValue, string longDescription);
    Item(const Item& original);
    int getValue() const;
    string getLongDescription() const;
    string getDescription() const;
    void setValue(int value);
    string itemNotification(int x);
    template<typename T>
    void interactWithItem(T interaction);
};
#endif /*ITEM_H_*/

#ifndef ITEM_H_
#define ITEM_H_

#include <string>

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
    string itemNotification(int x);
    template<typename T>
    void interactWithItem(T interaction);
};
#endif /*ITEM_H_*/

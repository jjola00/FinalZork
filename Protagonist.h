#ifndef PROTAGONIST_H
#define PROTAGONIST_H

class Protagonist {
public:
    void currentRoom();
    void openInventory();
    static Protagonist& getInstance();

private:
    Protagonist();
    static Protagonist instance;

};

#endif // PROTAGONIST_H

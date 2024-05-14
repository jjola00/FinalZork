#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <QTimer>
#include "servant.h"

#define MAX_ROOMS (12)
#define MAX_ITEMS (4)

using namespace std;
#include "ZorkUL.h"


ZorkUL::ZorkUL() : rooms(MAX_ROOMS), items(MAX_ITEMS) {
    createRooms();
}

ZorkUL::~ZorkUL() {
    for (auto& item : items) {
        delete item;
    }

    for (auto& room : rooms) {
        delete room;
    }
}

void ZorkUL::createRooms()  {
    Servant servant;
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l;
    Item *A, *B, *C, *D;

    A = new Item("Painting Fragment: 1", 1, "'The portrait painted by the Artist. "
                        "Why was it unfinished? Or did another entity alter the image?");
    B = new Item("Painting Fragment: 2", 2, "'The Wife held at knife point. "
                        "What was the reason? And what was the outcome?'");
    C = new Item("Painting Fragment: 3", 3, "'The Daughter weeping in the unknown room. "
                        "Is she reading, or writing, her final words?'");
    D = new Item("Painting Fragment: 4", 4, "'A battle between life, and death itself. "
                        "Who was the victor?' ");

    a = new Room("L'entree", servant.room1(), 1,false);
    b = new Room("La Chambre D'artiste",servant.room2(), 2, true);
    b->addItem(A);
    c = new Room("Le Salon", servant.room3(), 3, false);
    d = new Room("La Cuisine", servant.room4(), 4, false);
    e = new Room("La Cave", servant.room5(), 5, true);
    e->addItem(B);
    f = new Room("La Chambre de la Fille", servant.room6(), 6, false);
    g = new Room("??????????", servant.room7(), 7, true);
    g->addItem(C);
    h = new Room("La Chambre D'hotes", servant.room8(), 8, false);
    i = new Room("La Salle de Jeux", servant.room9(), 9, false);
    j = new Room("La Chambre de Nuit", servant.room10(), 10, false);
    k = new Room("La Salle D'exposition", servant.room11(), 11, true);
    k->addItem(D);
    l = new Room("L'Exit", servant.room12(), 12, false);

    a->setExits(b,NULL, NULL, NULL);
    b->setExits(NULL, d, a, c);
    c->setExits(f, b, NULL, NULL);
    d->setExits(NULL, e, NULL, b);
    e->setExits(h, NULL, NULL, d);
    f->setExits(j, NULL, c, g);
    g->setExits(NULL, f, NULL, NULL);
    h->setExits(i, NULL, e, NULL);
    i->setExits(NULL, NULL, h, k);
    j->setExits(NULL, k, f, NULL);
    k->setExits(l, i, NULL, j);
    l->setExits(NULL, NULL, k, NULL);

    currentRoom = a;
    rooms = {a, b, c, d, e, f, g, h, i, j, k, l};
    items = {A, B, C, D};

}


Room* ZorkUL::getCurrentRoom() const{
    return currentRoom;
}
void ZorkUL::setCurrentRoom(Room* room){
    currentRoom = room;
}

Item* ZorkUL::getCurrentItem() const{
    return currentItem;
}
void ZorkUL::setCurrentItem(Item* item) {
    currentItem = item;
}


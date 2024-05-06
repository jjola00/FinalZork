#include <iostream>
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QLineEdit>
#include <QTimer>

using namespace std;
#include "ZorkUL.h"


ZorkUL::ZorkUL() {
    createRooms();
}

void ZorkUL::createRooms()  {
    Room *a, *b, *c, *d, *e, *f, *g, *h, *i, *j, *k, *l;

    a = new Room("L'entree",1);
    b = new Room("La Chambre D'artiste",2);
    b->addItem(new Item("Painting Fragment: 1", 1, "Update Later"));
    c = new Room("Le Salon",3);
    d = new Room("La Cuisine",4);
    e = new Room("La Cave",5);
    e->addItem(new Item("Painting Fragment: 2", 2, "Update Later"));
    f = new Room("La Chambre de la Fille",6);
    g = new Room("??????????",7);
    g->addItem(new Item("Painting Fragment: 3", 3, "Update Later"));
    h = new Room("La Chambre D'hotes",8);
    i = new Room("La Salle de Jeux",9);
    j = new Room("La Chambre de Nuit",10);
    k = new Room("La Salle D'exposition",11);
    k->addItem(new Item("Painting Fragment: 4", 4, "Update Later"));

    l = new Room("L'Exit",11);

    a->setExits(b,NULL, NULL, NULL);
    b->setExits(NULL, d, a, c);//cannot go back to a
    c->setExits(f, b, NULL, NULL);
    d->setExits(NULL, e, NULL, b);
    e->setExits(h, NULL, NULL, d);
    f->setExits(j, NULL, c, g);
    g->setExits(NULL, f, NULL, NULL);
    h->setExits(i, NULL, e, NULL);
    i->setExits(NULL, d, h, k);
    j->setExits(NULL, k, f, NULL);
    k->setExits(l, i, NULL, j);
    l->setExits(NULL, NULL, k, NULL);

    currentRoom = a;
}


Room* ZorkUL::getCurrentRoom() const{
    return currentRoom;
}
void ZorkUL::setCurrentRoom(Room* room){
    currentRoom = room;
}

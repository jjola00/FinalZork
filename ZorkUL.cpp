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

    a = new Room("L'entree");
    b = new Room("La Chambre D'artiste");
    b->addItem(new Item("Painting Fragment: 1", 1));
    c = new Room("Le Salon");
    d = new Room("La Cuisine");
    e = new Room("La Cave");
    e->addItem(new Item("Painting Fragment: 2", 2));
    f = new Room("La Chambre de la Fille");
    g = new Room("??????????");
    g->addItem(new Item("Painting Fragment: 3", 3));
    h = new Room("La Chambre D'hotes");
    i = new Room("La Salle de Jeux");
    j = new Room("La Chambre de Nuit");
    k = new Room("La Salle D'exposition");
    k->addItem(new Item("Painting Fragment: 4", 4));

    l = new Room("L'Exit");

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

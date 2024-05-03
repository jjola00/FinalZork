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
    b->setExits(NULL, d, NULL, c);//cannot go back to a
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
/**
 *  Main play routine.  Loops until end of play.
 */
void ZorkUL::play() {
    printWelcome();

    // Enter the main command loop.  Here we repeatedly read commands and
    // execute them until the ZorkUL game is over.

    bool finished = false;
    while (!finished) {
        // Create pointer to command and give it a command.
        Command* command = parser.getCommand();
        // Pass dereferenced command and check for end of game.
        finished = processCommand(*command);
        // Free the memory allocated by "parser.getCommand()"
        //   with ("return new Command(...)")
        delete command;
    }
    cout << endl;
    cout << "end" << endl;
}

void ZorkUL::printWelcome() {
    cout << "start"<< endl;
    cout << "info for help"<< endl;
    cout << endl;
    cout << currentRoom->longDescription() << endl;
}

/**
 * Given a command, process (that is: execute) the command.
 * If this command ends the ZorkUL game, true is returned, otherwise false is
 * returned.
 */
bool ZorkUL::processCommand(Command command) {
    if (command.isUnknown()) {
        cout << "invalid input"<< endl;
        return false;
    }

    string commandWord = command.getCommandWord();
    if (commandWord.compare("info") == 0)
        printHelp();


    else if (commandWord.compare("map") == 0)
    {
        cout << "        [c] --- [f] --- [j]  " << endl;
        cout << "         |               |   " << endl;
        cout << "         |               |   " << endl;
        cout << "[a] --- [b]             [k]  " << endl;
        cout << "         |               |   " << endl;
        cout << "         |               |   " << endl;
        cout << "        [d]              |   " << endl;
        cout << "         |               |   " << endl;
        cout << "         |               |   " << endl;
        cout << "        [e] --- [h] --- [i]  " << endl;
    }

    else if (commandWord.compare("go") == 0)
        goRoom(command);

    else if (commandWord.compare("take") == 0)
    {
        if (!command.hasSecondWord()) {
            cout << "incomplete input"<< endl;
        }
        else
            if (command.hasSecondWord()) {
                cout << "you're trying to take " + command.getSecondWord() << endl;
                int location = currentRoom->isItemInRoom(command.getSecondWord());
                if (location  < 0 )
                    cout << "item is not in room" << endl;
                else
                    cout << "item is in room" << endl;
                cout << "index number " << + location << endl;
                cout << endl;
                cout << currentRoom->longDescription() << endl;
            }
    }

    else if (commandWord.compare("put") == 0)
    {

    }
    /*
    {
    if (!command.hasSecondWord()) {
        cout << "incomplete input"<< endl;
        }
        else
            if (command.hasSecondWord()) {
            cout << "you're adding " + command.getSecondWord() << endl;
            itemsInRoom.push_Back;
        }
    }
*/
    else if (commandWord.compare("quit") == 0) {
        if (command.hasSecondWord())
            cout << "overdefined input"<< endl;
        else
            return true; /**signal to quit*/
    }
    return false;
}
/** COMMANDS **/
void ZorkUL::printHelp() {
    cout << "valid inputs are; " << endl;
    parser.showCommands();

}

void ZorkUL::goRoom(Command command) {
    if (!command.hasSecondWord()) {
        cout << "incomplete input"<< endl;
        return;
    }

    string direction = command.getSecondWord();

    // Try to leave current room.
    Room* nextRoom = currentRoom->nextRoom(direction);

    if (nextRoom == NULL)
        cout << "underdefined input"<< endl;
    else {
        currentRoom = nextRoom;
        cout << currentRoom->longDescription() << endl;
    }
}

string ZorkUL::go(string direction) {
    //Make the direction lowercase
    //transform(direction.begin(), direction.end(), direction.begin(),:: tolower);
    //Move to the next room
    Room* nextRoom = currentRoom->nextRoom(direction);
    if (nextRoom == NULL)
        return("direction null");
    else
    {
        currentRoom = nextRoom;
        return currentRoom->longDescription();
    }
}

// int main(int argc, char* argv[]) {
//     QApplication app(argc, argv);
//     QLabel *label = new QLabel("Hello");
//     label->show();
//     return app.exec();
//     ZorkUL temp;
//      ZorkUL temp;
//      temp.play();
//     temp.play();
// }

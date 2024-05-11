#include "servant.h"
#include "ZorkUL.h"

namespace Servant{

Servant::Servant(string name, string description, int value)
    : Entity(name, description, value){}

string Servant::speak(unsigned int x = 4){
    string dialogue;
    ZorkUL zork;
    switch (x) {
    case 1:
        dialogue = room1();
        break;
    case 2:
        dialogue = room2();
        break;
    case 3:
        dialogue = room3();
        break;
    case 4:
        dialogue = room4();
        break;
    case 5:
        dialogue = room5();
        break;
    case 6:
        dialogue = room6();
        break;
    case 7:
        dialogue = room7();
        break;
    case 8:
        dialogue = room8();
        break;
    case 9:
        dialogue = room9();
        break;
    case 10:
        dialogue = room10();
        break;
    case 11:
        dialogue = room11();
        break;
    case 12:
        dialogue = room12();
        break;
    default:
        dialogue = "I don't know what to say.";
        break;
    }
    return dialogue;
}
string Servant::room1(){
    return "This is L'Entree";
}
string Servant::room2(){
    return "This is La Chambre D'artiste";
}

string Servant::room3(){
    return "This is Le Salon";
}

string Servant::room4(){
    return "This is La Cuisine";
}

string Servant::room5(){
    return "This is La Cave";
}

string Servant::room6(){
    return "This is La Chambre de La Fille";
}

string Servant::room7(){
    return "I...never knew this room existed.";
}

string Servant::room8(){
    return "This is La Chambre d'hotes";
}
string Servant::room9(){
    return "This is La Salle de Jeux";
}
string Servant::room10(){
    return "This is La Chambre de Nuit";
}
string Servant::room11(){
    return "This is La Salle D'Exposition";
}

string Servant::room12(){
    return "This is L'Exit. Are you sure you want to leave?";
}
}




#include "servant.h"
#include "ZorkUL.h"


Servant::Servant(string name, string description, int value)
    : Entity(name, description, value){}

Servant::Servant(){}

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
    return "C'est L'Entree de la Maison de Rochefort. As you explore each room, I hope the "
           "memories of this mansion become clear. The paintings on the wall act as images of "
           "crucial events engrained into the mansion, the author, unknown. If you successfully "
           "piece together the events of the mansion's past, you will regain my trust..";
}
string Servant::room2(){
    return "C'est La Chambre D'artiste. A fortnight before the incident, an Artist"
           " was hired to paint your portrait, although never finished. ALl that's left "
           "is a disfigured painting, and an empty bedframe";
}

string Servant::room3(){
    return "C'est Le Salon. Other than her room, the only place the daughter would seemingly "
           "appear. The Artist took a similar liking. They quickyly bonded and became"
           " close....Perhaps too close.";
}

string Servant::room4(){
    return "C'est La Cuisine.  A sonce spotless galley governed by none other than The Wife,"
           "now...... left for ruin. T Wife pays occassional visits, always to retrieve her dagger.";
}

string Servant::room5(){
    return "C'est La Cave. The cellar is seldomnly visited, but the writing on the wall"
           " spells otherwise. The artist drew his knife. His iris reflected his bloodlust..";
}

string Servant::room6(){
    return "C'est La Chambre de La Fille. She always struck me as a troubled child. "
           "Conspicuous.......Ominous........but always kept her council. But is murder"
           " beyond even her?";
}

string Servant::room7(){
    return "I...never knew this room existed. A secret room only the daughter beared knowledge"
           " of. Now, engulfed in the pungent smell of decaying blood, the only question is who's.";
}

string Servant::room8(){
    return "C'est La Chambre d'hotes. The designated room for The Artist. He was, by strict order"
           ", prohibited from entering the family's bedchamber,"
           " but the showroom was never off limits.";
}
string Servant::room9(){
    return "C'est La Salle de Jeux. Once a joyful, childish splendor for the daughter. "
           "Your neglection for it grew in proportyion to your business, and your daughter's "
           "joy diminished in kind.";
}
string Servant::room10(){
    return "C'est La Chambre de Nuit. It's location is so precious. You always kept your "
           "business and loved ones close at hand, sometimes, they intertwined. "
           "These path's crossed at the incident, and a homocide occured on stage....the crowd, "
           "refusing an encore.";
}
string Servant::room11(){
    return "C'est La Salle D'Exposition. The Black Swan, The Seagull, Salome are performances"
           " engraved in the theatre's history. The final act was reminiscent of Macbeth,"
           " the lead actress: The Wife.";
}

string Servant::room12(){
    return "C'est L'Exit. Are you sure you want to leave?";
}





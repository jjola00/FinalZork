#include "servant.h"
namespace Servant {

Servant::Servant(string name, string description, int value)
    : Entity(name, description, value){}

Servant::Servant(){}
string Servant::room1(){
    return "C'est L'Entree de la Maison de Rochefort.\nAs you explore each room, I hope the "
           "memories of this mansion become clear.\nThe paintings on the wall act as images of "
           "crucial events\nengrained into the mansion, the author, unknown.\nIf you successfully "
           "piece together the events of the mansion's past,\n you will regain my trust..";
}
string Servant::room2(){
    return "C'est La Chambre D'artiste.\nA fortnight before the incident, an Artist"
           " was hired to paint your portrait,\n although never finished.\nALl that's left "
           "is a disfigured painting, and an empty bedframe";
}

string Servant::room3(){
    return "C'est Le Salon.\nOther than her room, the only place the daughter would seemingly "
           "appear.\nThe Artist took a similar liking.\nThey quickyly bonded and became"
           " close..Perhaps too close.";
}

string Servant::room4(){
    return "C'est La Cuisine.\nA once spotless galley governed by none other than The Wife,"
           "now... left for ruin.\nThe Wife pays occassional visits, always to retrieve her dagger.";
}

string Servant::room5(){
    return "C'est La Cave.\nThe cellar is seldomnly visited, but the writing on the wall"
           " spells otherwise.\nThe artist drew his knife.\nHis iris reflected his bloodlust..";
}

string Servant::room6(){
    return "C'est La Chambre de La Fille.\nShe always struck me as a troubled child. "
           "Conspicuous....\nOminous...\nand always kept her council.\nBut is murder"
           " beyond even her?";
}

string Servant::room7(){
    return "I...never knew this room existed.\nA secret room only the daughter beared knowledge"
           " of.\nNow, engulfed in the pungent smell of decaying blood, the only question is who's.";
}

string Servant::room8(){
    return "C'est La Chambre d'hotes.\nThe designated room for The Artist.\nHe was, by strict order"
           ", prohibited from entering the family's bedchamber,\n"
           " but the showroom was never off limits.";
}
string Servant::room9(){
    return "C'est La Salle de Jeux.\nOnce a joyful, childish splendor for the daughter.\n"
           "Your neglection for it grew in proportion to your business,\n and your daughter's "
           "joy diminished in kind.";
}
string Servant::room10(){
    return "C'est La Chambre de Nuit.\nIt's location is so precious.\nYou always kept your "
           "business and loved ones close at hand, sometimes, they intertwined.\n"
           "These path's crossed at the incident, and a homocide occured on stage.";
}
string Servant::room11(){
    return "C'est La Salle D'Exposition.\nThe Black Swan,\nThe Seagull,\nSalome are performances"
           " engraved in the theatre's history.\nThe final act was reminiscent of Macbeth,"
           " the lead actress: The Wife.";
}

string Servant::room12(){
    return "C'est L'Exit. Are you sure you want to leave?";
}
}



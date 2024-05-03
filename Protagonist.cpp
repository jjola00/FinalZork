#include "Protagonist.h"

Protagonist Protagonist::instance;

Protagonist::Protagonist() {
}
Protagonist& Protagonist::getInstance() {
    return instance;
}

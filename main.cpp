#include "ZorkUL.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    ZorkUL zork;
    zork.createRooms();
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}

#include <QCoreApplication>
#include "npc.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Attaque attaque;
    Soin soin;
    Fuite fuite;

    int i =100;
    Ennemi orc(&attaque);

    while(i > 0)
    {
        std::cout << i << "pv" << std::endl;
        orc.execute();
        i -=10;

        if( i < 40)
        {
            orc.setNpc(&soin);
        }
        if(i <= 10)
        {
            orc.setNpc(&fuite);
        }
    }

    return a.exec();
}

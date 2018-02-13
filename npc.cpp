#include "npc.h"


void Attaque::execute()
{
    std::cout << " Ici, le premier comportement de l'ennemi, par exemple attaquer " << std::endl;
}

void Soin::execute()
{
    std::cout << " Ici, le NPC a la vie qui diminue, il tente de se soigner " << std::endl;
}

void Fuite::execute()
{
    std::cout << " Pour finir, le NPC commence serieusement à manquer de vie, il va donc essayer de fuir " << std::endl;
}


NPC *Ennemi::npc() const
{
    return m_npc;
}

void Ennemi::setNpc(NPC *npc)
{
    m_npc = npc;
}

Ennemi::Ennemi(NPC *npc) : m_npc(npc),m_health(100)
{

}

int Ennemi::health() const
{
    return m_health;
}

void Ennemi::setHealth(int health)
{
    m_health = health;
}

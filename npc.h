#ifndef NPC_H
#define NPC_H
#include <iostream>


class NPC
{
public:
    virtual void execute() = 0;

};

class Attaque : public NPC
{
public:
    void execute();
};

class Soin : public NPC
{
public:
    void execute();
};

class Fuite : public NPC
{
public:
    void execute();
};

class Ennemi
{
public:

    Ennemi(NPC* npc);

    void execute()
    {
        m_npc->execute();
    }

    NPC *npc() const;
    void setNpc(NPC *npc);

    int health() const;
    void setHealth(int health);

private:
    NPC* m_npc;
    int m_health;
};

#endif // NPC_H

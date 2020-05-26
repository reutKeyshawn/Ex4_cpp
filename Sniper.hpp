
#ifndef SNIPER_H_
#define SNIPER_H_
#include <vector>
#include "Soldier.hpp"

class Sniper : public Soldier
{

public:
    Sniper(uint player_id, uint health_points = 100, uint damage = 50) : Soldier{player_id, health_points, damage} {}
    Sniper();
    virtual void attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location);
    ~Sniper();
};
void Sniper::attack(std::vector<std::vector<Soldier *>> &b, std::pair<int, int> location) { return; }

Sniper::~Sniper()
{
}

#endif
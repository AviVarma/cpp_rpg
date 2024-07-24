#pragma once
#include "HitPointTypes.h"

class Hp
{
private:
    hptype CurrentHp;
    hptype MaxHp;
public:
    bool setMaxHP(hptype new_max_hp);
    void takeDamage(hptype amount);
    void heal(hptype amount);
    hptype getMaxHp();
    hptype getCurrentHp();
};

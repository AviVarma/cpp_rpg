#include "Hp.h"

bool Hp::setMaxHP(hptype new_max_hp) {
    if (new_max_hp < 1) {
        return false;
    }
    MaxHp = new_max_hp;
    if (CurrentHp > MaxHp) {
        CurrentHp = MaxHp;
    }
    return true;
}

void Hp::takeDamage(hptype amount) {
    if (amount > CurrentHp) {
        // you may want to allow for negative as a feature.
        CurrentHp = 0;
        return;
    }
    else
    {
        CurrentHp -= amount;
    }
}

void Hp::heal(hptype amount) {
    if (amount + CurrentHp > MaxHp) {
        CurrentHp = MaxHp;
        return;
    }
    else
    {
        CurrentHp += amount;
    }
}

hptype Hp::getMaxHp() {
    return MaxHp;
}

hptype Hp::getCurrentHp() {
    return CurrentHp;
}

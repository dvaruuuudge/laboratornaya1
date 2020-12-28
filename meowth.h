#pragma once
#include "pokemon.h"

class meowth : protected Pokemon
{
private:
    int specialAttack;
    int specialDefense;

public:
    meowth(std::string l_name, int l_HP, int l_attack, int l_defense, int l_speed, int l_specialAttack, int l_specialDefense) {
        name = l_name;
        HP = l_HP;
        attack = l_attack;
        defense = l_defense;
        speed = l_speed;
        specialAttack = l_specialAttack;
        specialDefense = l_specialDefense;

    }
    void setspecialAttack(int l_specialAttack);
    int getspecialAttack();
    void setspecialDefense(int l_specialDefense);
    int getspecialDefense();
    void print();
    void YAML();
};

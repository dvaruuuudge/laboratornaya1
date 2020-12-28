#pragma once
#include <string>


using namespace std;

class Pokemon {

public:
    int HP;
    int attack;
    int defense;
    int speed;
    std::string name;
    Pokemon(std::string l_name, int l_HP, int l_attack, int l_defense, int l_speed);
    Pokemon();
    void SetPokemonName(std::string l_name);
    void SetPokemonHP(int l_HP);
    void SetPokemonAttack(int l_attack);
    void SetPokemonDefense(int l_defense);
    void SetPokemonSpeed(int l_speed);

    std::string GetPokemonName();
    int GetPokemonHp();
    int GetPokemonAttack();
    int GetPokemonDefense();
    int GetPokemonSpeed();

    void print();


};
#include "meowth.h"
#include <iostream>
#include <fstream>

void meowth::YAML()
{
    std::ofstream pokemon1;
    pokemon1.open("pokemons.yml", std::ios::app);
    pokemon1 << "- pokemon: \n";
    pokemon1 << " name: " << GetPokemonName() << "\n";
    pokemon1 << " hp: " << GetPokemonHp() << "\n";
    pokemon1 << " attack: " << GetPokemonAttack() << "\n";
    pokemon1 << " defense: " << GetPokemonDefense() << "\n";
    pokemon1 << " speed: " << GetPokemonSpeed() << "\n";
    pokemon1 << " specialattack: " << getspecialAttack() << "\n";
    pokemon1 << " specialdefence: " << getspecialDefense() << "\n";
    pokemon1.close();
}

void meowth::print()

{
    Pokemon::print();
    std::cout << "Специальная атака: " << specialAttack << std::endl;
    std::cout << "Специальная защита: " << specialDefense << std::endl;
}



void meowth::setspecialAttack(int l_specialAttack) { meowth::specialAttack = l_specialAttack; }
int meowth::getspecialAttack() { return specialAttack; }
void meowth::setspecialDefense(int l_specialDefense) { meowth::specialDefense = l_specialDefense; }
int meowth::getspecialDefense() { return specialDefense; }
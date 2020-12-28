#include "bulbasaur.h"
#include <iostream>
#include <fstream>

void bulbasaur::YAML()
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

void bulbasaur::print()

{
    Pokemon::print();
    std::cout << "Специальная атака: " << specialAttack << std::endl;
    std::cout << "Специальная защита: " << specialDefense << std::endl;
}



void bulbasaur::setspecialAttack(int l_specialAttack) { bulbasaur::specialAttack = l_specialAttack; }
int bulbasaur::getspecialAttack() { return specialAttack; }
void bulbasaur::setspecialDefense(int l_specialDefense) { bulbasaur::specialDefense = l_specialDefense; }
int bulbasaur::getspecialDefense() { return specialDefense; }
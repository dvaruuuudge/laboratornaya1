#include "pikachu.h"
#include <iostream>
#include <fstream>

void pikachu::YAML()
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

void pikachu::print()

{
    Pokemon::print();
    std::cout << "Специальная атака: " << specialAttack << std::endl;
    std::cout << "Специальная защита: " << specialDefense << std::endl;
}


void pikachu::setspecialAttack(int l_specialAttack) { pikachu::specialAttack = l_specialAttack; }
int pikachu::getspecialAttack() { return specialAttack; }
void pikachu::setspecialDefense(int l_specialDefense) { pikachu::specialDefense = l_specialDefense; }
int pikachu::getspecialDefense() { return specialDefense; }
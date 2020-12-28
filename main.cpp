#include <iostream>
#include <fstream>
#include "pokemon.h"
#include "pikachu.h"
#include "bulbasaur.h"
#include "meowth.h"



int main() {

    setlocale(LC_ALL, "Russian");

    pikachu pikachu("ѕикачу", 40, 82, 22, 90, 120, 110);
    pikachu.print();
    pikachu.YAML();
    bulbasaur bulbasaur("Ѕульабазавр", 80, 44, 65, 38, 52, 60);
    bulbasaur.print();
    bulbasaur.YAML();
    meowth meowth("ћ€ут", 48, 75, 32, 77, 90, 95);
    meowth.print();
    meowth.YAML();
}

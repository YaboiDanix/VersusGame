#include "fight.h"

#include <complex.h>
#include <cstdlib>
#include <ctime>
#include <print>
// Created by danix on 9/17/2026.
//
int g_fight() {
    //Grimgor peut
    //attaquer (2-8 degats)
    srand(time(NULL));
    int attaque = rand() % 6 + 3;

    //10% de chances de doubler ses degats
    if (rand() % 100 < 10) {
        int waaagh = attaque * 2;
        std::println("grimgor doubled damage {}", waaagh);
        return waaagh;
    }
    std::println("grimgor damage {}", attaque);
    return attaque;
}


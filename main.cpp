#include <iostream>
#include <string>
#include <print>
#include "fight.h"
int main() {
    int Theobald = 100;
    int Grimgor = 10;


    while(Theobald > 0 && Grimgor > 0 ){
        //Theobald et grimgor jouent chacun leur tour
        std::string act;
        do {
            std::cout<<"voulez vous attaquer/defendre/soigner? :";
            std::getline(std::cin, act);
        }while (act.empty());
        if (act == "A" || act == "a" || act == "attaquer") {
            Grimgor -=5;
            Theobald-=g_fight();
        }
        else if (act == "S" || act == "s" || act == "soigner") {
            Theobald += 3;
            Theobald-=g_fight();
        }
        else if (act == "D" || act == "d" || act == "defendre") {
            int defense = g_fight()*0.7;
            Theobald-=defense;
            std::println("Theobald s'est defendu et a recu {} degats", defense);
        }

        std::println("Theobald a {} PV", Theobald);
        std::println("grimgor a {} PV", Grimgor);


        //Afficher un message de qui a gagner
        ;
    }
    if (Theobald < 0);
    {
        std::println("Grimgor a vaincu Theobald avec {} PV", Grimgor);

        return 0;
        }
    std::println("Theobald a vaincu grimgor avec {} PV", Theobald);

    return 0;
}
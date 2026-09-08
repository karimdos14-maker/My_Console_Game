#include <iostream>
#include <string>
#include <Windows.h>
#include "Res.h"

struct Player {
    std::string nickName;
 
};

int SPECIAL_DICTIONARY() {
    std::cout << "===Dictionary===" << std::endl;
    std::cout << "* = Empty Land" << std::endl;
    std::cout << "T = Town  Hall" << std::endl;
    std::cout << "================" << std::endl;
    return 0;
}

    

int main() {

    char choice1;

    do {

        Resources resources;
        Player player;
        int forCycle = 0;
        std::string choice;
        player.nickName;    
        std::cout << "***Village***" << std::endl;
        std::cout << "1 = Resources" << std::endl;
        std::cout << "2 = Buildings" << std::endl;
        std::cout << "Q = Quit" << std::endl;
        std::cin >> choice1;
        if (choice1 == '1') {
            resources.gold = 1000;
            resources.oil = 1000;
            resources.diamonds = 200;
            resources.liquid_gems = 0;
            std::cout << resources.gold << std::endl;
            std::cout << resources.oil << std::endl;
            std::cout << resources.diamonds << std::endl;
            std::cout << resources.liquid_gems << std::endl;
        }
        else if (choice1 == '2') {

        }
        else if (choice1 == 'Q' || choice1 == 'q') {
            break;
        }
        Sleep(3000);
        std::cout << "Hello!" << std::endl;
        std::cout << "Create Nickname!" << std::endl;
        std::cin >> player.nickName;
        Sleep(2000);
        std::cout << "Nice Nickname! " << player.nickName << std::endl;
        Sleep(1000);
        std::cout << "You can look up the symbols in the special dictionary, " << std::endl;
        std::cout << "Do you want open dictionary? " << std::endl;
        std::cin >> choice;
        if (choice == "yes") {
            SPECIAL_DICTIONARY();
        }

       
        std::cout << "You village" << '\n' << std::endl;
          
        
    } while (choice1 != 'Q' && choice1 != 'q');

}   
#include <iostream>
#include <string>
#include <Windows.h>

struct Player {
    std::string nickName;
 
};
int main() {

    while (true) {
        Player player;
        int forCycle = 0;
        const int rows = 5;
        const int cols = 5;
        std::string choice;

        char grid[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                grid[i][j] = '*';

            }
        }
        player.nickName;  
        std::cout << "***Village***" << std::endl;
        Sleep(3000);
        std::cout << "Hello!" << std::endl;
        std::cout << "Create Nickname!" << std::endl;
        std::cin >> player.nickName;
        Sleep(2000);
        std::cout << "Nice Nickname! " << player.nickName << std::endl;
        Sleep(1000);
        std::cout << "You can look up the symbols in the special dictionary, " << std::endl;
        std::cout << "You can open dictionary 'T'  " << std::endl;
        std::cout << "If you want exit, tap 'Q'" << std::endl;

        

        if ((GetAsyncKeyState('T') & 0x8000) || (GetAsyncKeyState('T') & 0x8000)) {
            std::cout << "\n=== SPECIAL DICTIONARY ===" << std::endl;
            std::cout << " * - empty land" << std::endl;
            std::cout << " T - Tower hall" << std::endl;
            std::cout << " G - Gun       " << std::endl;
            std::cout << " A - Artillery " << std::endl;
            std::cout << "==========================\n" << std::endl;

            Sleep(3000); 
        }
        if ((GetAsyncKeyState('Q') & 0x8000) || (GetAsyncKeyState('q') & 0x8000)) {
            std::cout << "Quiting..." << std::endl;
            Sleep(3000);
            break;
        }
        Sleep(10000);
        std::cout << "Do you want look on you village?" << std::endl;
        std::cin >> choice;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    std::cout << grid[i][j] << " ";
                }
                std::cout << std::endl;
            }
            goto exit1;
    } 
exit1: 
    return 0;
}

#include <iostream>
#include <string>
#include <Windows.h>

struct Player {
    std::string nickName;
 
};

int SPECIAL_DICTIONARY(){
    std::cout << "===Dictionary===" << std::endl;
    std::cout << "* = Empty Land" << std::endl;
}
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

       
        std::cout << "Do you want look on you village?" << std::endl;
        std::cin >> choice;
        if (choice == "yes") {
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    std::cout << grid[i][j] << " ";
                }
                std::cout << std::endl;
            } 
       
        }
        else {
            break;
        }
        break;
    } 

}   

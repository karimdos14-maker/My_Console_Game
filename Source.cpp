#include <iostream>
#include <Windows.h>

int main() {

    while (true) {
        int forCycle = 0;
        const int rows = 5;
        const int cols = 5;


        char grid[rows][cols];

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                grid[i][j] = '*';

            }
        }
        std::string nickName;
        std::cout << "***Village***" << std::endl;
        Sleep(3000);
        std::cout << "Hello!" << std::endl;
        std::cout << "Create Nickname!" << std::endl;
        std::cin >> nickName;
        Sleep(2000);
        std::cout << "Nice Nickname! " << nickName << std::endl;
        Sleep(1000);
        std::cout << "its you village!" << std::endl;
        std::cout << "You can look up the symbols in the special dictionary" << std::endl;

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
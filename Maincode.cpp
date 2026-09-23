#include <fstream>
#include <iostream>
#include <string>
#include <Windows.h>
#include "Res.h"
#include <ctime>
#include "Buildings.h"

struct Player {
    std::string nickName;

};
struct Shop {
    std::string TH = "Town Hall";
};
int SHOP_BUILDING() {
    Shop shop;
    std::string firts = shop.TH;
    return 0;
}
void saveStatus(const Player& player, const Resources& res) {
    std::ofstream file("savestatus.txt");
    file << "nickname=" << player.nickName << '\n';
    file << "gold=" << res.gold << '\n';
    file << "oil=" << res.oil << '\n';
    file << "liquid gems=" << res.liquid_gems << '\n';
    file << "diamonds=" << res.diamonds << '\n';
    file.close();
}
int loadGame(Player& player, Resources& res) {
    std::ifstream file("savestatus.txt");
    if (!file.is_open()) {
        std::cout << "Game not have saves!\n";
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        size_t pos = line.find('=');
        if (pos == std::string::npos) continue;

        std::string key = line.substr(0, pos);
        std::string value = line.substr(pos + 1);

        if (key == "nickname")      player.nickName = value;
        else if (key == "gold")     res.gold = std::stoi(value);
        else if (key == "oil")      res.oil = std::stoi(value);
        else if (key == "diamonds") res.diamonds = std::stoi(value);
        else if (key == "liquid gems") res.liquid_gems = std::stoi(value);
    }
    file.close();
    return 0;
}
int main() {
    Building build;
    Player player;
    Resources resources;
    char choice1 = '0';

    loadGame(player, resources);

    if (player.nickName.empty()) {
        std::cout << "Create Nickname!\n";
        std::getline(std::cin >> std::ws, player.nickName);
        saveStatus(player, resources);
    }
    else {
        std::cout << "Welcome back, " << player.nickName << "!\n";
    }

    do {
        std::cout << "\n***Village***\n";
        std::cout << "1 = Resources\n2 = Buildings\nQ = Quit\n";
        std::cin >> choice1;

        if (choice1 == '1') {
            std::cout << "Gold: " << resources.gold << "\n";
            std::cout << "Oil: " << resources.oil << "\n";
            std::cout << "Diamonds: " << resources.diamonds << "\n";
            std::cout << "Liquid Gems: " << resources.liquid_gems << "\n";
        }
        else if (choice1 == '2') {
            std::cout << "* = Empty Land" << std::endl;
            std::cout << "T = Town  Hall" << std::endl;
        }

    } while (choice1 != 'Q' && choice1 != 'q');

    saveStatus(player, resources);
    std::cout << "Game Saved, goodbye!\n";
    return 0;
}



#include <iostream>
#include "battlefield.h"
#include "enemyBattlefield.h"

int posX;
int posY;

bool hit(int x, int y) {
    if(enemyBoardArr[x][y] == 1) {
        boardArr[x][y] = 2;
        return true;
    }
    return false;
}

bool enemyHit(int x, int y) {
    if(boardArr[x][y] == 1) {
        boardArr[x][y] = 2;
        return true;
    }
    return false;
}


int main() {
    srand(time(NULL));
    initializeArr();
    shipSpawn();
    showArr();
    while (1) {
        std::cout << "Input X and Y location: " << std::endl;
        std::cin >> posX >> posY;
        if(hit(posX, posY)) {
            std::cout << "Ship hit!" << std::endl;
        } else
            std::cout << "Miss!" << std::endl;
        std::cout << "Amount of ships left: " << displayamntShips << std::endl;
        showArr();
    }
    return 0;
}

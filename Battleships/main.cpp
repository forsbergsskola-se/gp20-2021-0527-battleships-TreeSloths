#include <iostream>
#include "battlefield.h"
#include "enemyBattlefield.h"

int posX;
int posY;

bool hit(int x, int y) {
    if(enemyBoardArr[x][y] == 1) {
        enemyBoardArr[x][y] = 2;
        return true;
    }
    return false;
}



int main() {
    srand(time(NULL));
    initializeArr();
    shipSpawn();
    enemyShipSpawn();
    showEnemyArr();

    while (1) {
        std::cout << "Input X and Y location: " << std::endl;
        std::cin >> posX >> posY;
        if(hit(posX, posY)) {
            std::cout << "Hit!" << std::endl;
        } else
            std::cout << "Miss!" << std::endl;
        std::cout << "Amount of enemy ships left: " << displayEnemyShipAmount << std::endl;
        std::cout << "Amount of your ships left: " << displayamntShips << std::endl;
        showArr();
        enemyAI();
    }
    return 0;
}

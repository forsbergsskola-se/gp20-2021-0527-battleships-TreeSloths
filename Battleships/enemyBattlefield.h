//
// Created by Adam on 2021-06-11.
//

#ifndef BATTLESHIPS_ENEMYBATTLEFIELD_H
#define BATTLESHIPS_ENEMYBATTLEFIELD_H
int enemyBoardArr[10][10];
int maxEnemyShips = 5;

bool enemyShoot(int x, int y) {
    if(boardArr[x][y] == 1) {
        boardArr[x][y] = 2;
        return true;
    }
    return false;
}

void initializeEnemyArr() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            enemyBoardArr[i][j] = 0;
        }
    }
}

int displayEnemyShipAmount() {
    for (int i = 0; i < 10; i++) {
        int amountofShips = 0;
        for (int j = 0; j < 10; j++) {
            if(enemyBoardArr[i][j] == 1) {
                amountofShips++;
            }
            return amountofShips;
        }
    }
}


void enemyShipSpawn() {
    int ships = 0;
    while(ships < maxEnemyShips) {
        int x = rand() % 10;
        int y = rand() % 10;
        if(enemyBoardArr[x][y] != 1) {
            ships++;
            enemyBoardArr[x][y] = 1;
        }
    }
}


void showEnemyArr(){
    for (int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++ ) {
            std::cout <<  enemyBoardArr[i][j] << "  ";
        }
        std::cout << "\n";
    }
    displayamntShips();
}

void enemyAI(){
    initializeEnemyArr();
    int x = rand() % 20;
    int y = rand() % 20;
    if(enemyShoot(x, y)) {
        std::cout << "Enemy hit your ship!" << std::endl;
    } else
        std::cout << "Enemy missed your ship!" << std::endl;
}


#endif //BATTLESHIPS_ENEMYBATTLEFIELD_H

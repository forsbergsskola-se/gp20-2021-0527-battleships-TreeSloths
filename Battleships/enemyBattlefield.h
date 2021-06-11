//
// Created by Adam on 2021-06-11.
//

#ifndef BATTLESHIPS_ENEMYBATTLEFIELD_H
#define BATTLESHIPS_ENEMYBATTLEFIELD_H
int enemyBoardArr[10][10];
int maxShip = 5;
void initializeEnemyArr() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            boardArr[i][j] = 0;
        }
    }
}

int displayamntShips() {
    for (int i = 0; i < 10; i++) {
        int amountofShips = 0;
        for (int j = 0; j < 10; j++) {
            if(boardArr[i][j] == 1) {
                amountofShips++;
            }
            return amountofShips;
        }
    }
}


void shipSpawn() {
    int ships = 0;
    while(ships < maxShip) {
        int x = rand() % 6;
        int y = rand() % 6;
        if(boardArr[x][y] != 1) {
            ships++;
            boardArr[x][y] = 1;
        }
    }
}


void showArr(){
    for (int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++ ) {
            std::cout <<  boardArr[i][j] << "  ";
        }
        std::cout << "\n";
    }
    displayamntShips();
}


#endif //BATTLESHIPS_ENEMYBATTLEFIELD_H

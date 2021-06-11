//
// Created by Adam on 2021-06-04.
//

#ifndef BATTLESHIPS_BATTLEFIELD_H
#define BATTLESHIPS_BATTLEFIELD_H
int boardArr[10][10];
int maxShip = 10;
void initializeArr() {
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
        int x = rand() % 10;
        int y = rand() % 10;
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



/*struct battlefieldArr {
    int arrayA[10];
    int arrayB[10];
    int arrayC[10];
    int arrayD[10];
    int arrayE[10];
    int arrayF[10];
    int arrayG[10];
    int arrayH[10];
    int arrayI[10];
    int arrayJ[10];
} arrays;
void printArr() {
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayA[i] << " ";
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayB[i] << " ";
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayC[i] << " ";
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayD[i] << " ";
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayE[i] << " ";
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayF[i] << " ";
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayG[i] << " ";
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayH[i] << " ";
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayI[i] << " ";
    for(int i = 0; i < 10; i++)
    std::cout << arrays.arrayJ[i] << " ";
} */

#endif //BATTLESHIPS_BATTLEFIELD_H

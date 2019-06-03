
#include <stdio.h>
#include <stdlib.h>


char grid[3][3] = {{'1', '2', '3'},
                   {'4', '5', '6'},
                   {'7', '8', '9'}};
int currentPlayer = 0;

void showGrid() {

    system("clear");
    printf("***************************");
    for (int i = 0; i < 3; i++) {
        printf("\n*||---------------------||*\n");
        for (int j = 0; j < 3; j++) {
            printf(" || %c || ", grid[i][j]);
        }
    }
    printf("\n***************************\n");
}

int selection(char gridElementPosition, char playerType) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i][j] == gridElementPosition) {
                grid[i][j] = playerType;
            }

        }
    }

    return 0;

}



int main() {


    int gameMode;
    char selectedGrid;

    printf("Welcome to Tic Tac Toe\n");
//
//    while (!(gameMode == 1 || gameMode == 2)) {
//
//
//        printf("\nPlease choose the game mode \n\nPress 1 for User vs User Mode\n\nPress 2 for Computer vs User Mode\n");
//
//        scanf("%d", &gameMode);
//
//
//    }
//
//    if (gameMode == 1) {
//        printf("You have selected User vs User Mode\n");
//    } else if (gameMode == 2) {
//        printf("You have selected Computer vs User Mode\n");
//    } else {
//
//        printf("Wrong selection");
//    }

    showGrid();

    printf("\nPlayer 1 is X and Player 2 is O\n");

    printf("Please enter the number between 1 - 9: \n");
    scanf("%c", &selectedGrid);

    if(currentPlayer == 0 || currentPlayer == 1) {

        if(!selection(selectedGrid, 'O')) {
            currentPlayer = 2;
        } else {
            currentPlayer = 1;
        }
    }


    showGrid();

    return 0;

}

#include <stdio.h>
#include <stdlib.h>


char grid[3][3] = {{'1', '2', '3'},
                   {'4', '5', '6'},
                   {'7', '8', '9'}};

char win = ' ';

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
            if (grid[i][j] == gridElementPosition ) {
                grid[i][j] = playerType;
                return 0;
            }

        }
    }
    return 1;
}

void checkWin(){

int total;

    if (grid[0][0] == 'O' && grid[0][1] == 'O' && grid[0][2] == 'O') {
        win = 'O';
    } else if (grid[1][0] == 'O' && grid[1][1] == 'O' && grid[1][2] == 'O') {
        win = 'O';
    } else if (grid[2][0] == 'O' && grid[2][1] == 'O' && grid[2][2] == 'O') {
        win = 'O';
    } else if (grid[0][0] == 'O' && grid[1][0] == 'O' && grid[2][0] == 'O') {
        win = 'O';
    } else if (grid[0][1] == 'O' && grid[1][1] == 'O' && grid[2][1] == 'O') {
        win = 'O';
    } else if (grid[0][2] == 'O' && grid[1][2] == 'O' && grid[2][2] == 'O') {
        win = 'O';
    } else if (grid[0][0] == 'O' && grid[1][1] == 'O' && grid[2][2] == 'O') {
        win = 'O';
    } else if (grid[0][2] == 'O' && grid[1][1] == 'O' && grid[2][0] == 'O') {
        win = 'O';
    } else if (grid[0][0] == 'X' && grid[0][1] == 'X' && grid[0][2] == 'X')
        win = 'X';
    else if (grid[1][0] == 'X' && grid[1][1] == 'X' && grid[1][2] == 'X') {
        win = 'X';
    } else if (grid[2][0] == 'X' && grid[2][1] == 'X' && grid[2][2] == 'X') {
        win = 'X';
    } else if (grid[0][0] == 'X' && grid[1][0] == 'X' && grid[2][0] == 'X') {
        win = 'X';
    } else if (grid[0][1] == 'X' && grid[1][1] == 'X' && grid[2][1] == 'X') {
        win = 'X';
    } else if (grid[0][2] == 'X' && grid[1][2] == 'X' && grid[2][2] == 'X') {
        win = 'X';
    } else if (grid[0][0] == 'X' && grid[1][1] == 'X' && grid[2][2] == 'X') {
        win = 'X';
    } else if (grid[0][2] == 'X' && grid[1][1] == 'X' && grid[2][0] == 'X') {
        win = 'X';
    }

    if(win == 'X') {
        printf("\nPlayer 1 wins\n");
        return;
    }
    if(win == 'O') {
        printf("\nPlayer 2 wins\n");
        return;
    }

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++){
            if((grid[i][j] == 'X' || grid[i][j] == 'O')) {
                total++;
            }
        }
    }
    if(total == 9) {
        printf("Draw!");
        return;
        }
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

    while (!(win == 'X' || win == 'O')) {
        printf("\n%c\n", win);
        if(currentPlayer == 1 || currentPlayer == 0) {
            printf("\n Player X\n");
            printf("Please enter the number between 1 - 9: \n");
            scanf("%c", &selectedGrid);
            if(selection(selectedGrid, 'X') == 1)
                currentPlayer = 1;
            else
                currentPlayer = 2;

        }
        else {
            printf("\n Player O\n");
            printf("Please enter the number between 1 - 9: \n");
            scanf("%c", &selectedGrid);
            if(selection(selectedGrid, 'O') == 1)
                currentPlayer = 2;
            else
                currentPlayer = 1;
        }

        showGrid();
        checkWin();

    }
    return 0;

}
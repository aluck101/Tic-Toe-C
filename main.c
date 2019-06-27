
#include <stdio.h>
#include <stdlib.h>
#include "game.h"



int currentPlayer = 0;
char grid[3][3]= {{'1', '2', '3'},
{'4', '5', '6'},
{'7', '8', '9'}};


void showGrid() {

    system("clear");
    printf("*******************\n");
    printf("*|| %c || %c || %c ||*\n", grid[0][0], grid[0][1], grid[0][2]);
    printf("*||-------------||*\n");
    printf("*|| %c || %c || %c ||*\n", grid[1][0], grid[1][1], grid[1][2]);
    printf("*||-------------||*\n");
    printf("*|| %c || %c || %c ||*\n", grid[2][0], grid[2][1], grid[2][2]);
    printf("*******************\n");

}

int selection(char gridElementPosition, char playerType) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            //Check for valid selection
            if (grid[i][j] == gridElementPosition ) {
                grid[i][j] = playerType;
                return 0;
            }

        }
    }
    return 1;
}


void checkWin(){

    int total = 0;

    for (int i = 0; i < 3; i++) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
            if (grid[i][0] == 'X')
                win = 'X';
            else if (grid[i][0] == 'O')
                win = 'O';
        }
    }
    for (int j = 0; j < 3; j++) {
        if (grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j]) {
            if (grid[0][j] == 'X')
                win = 'X';
            else if (grid[0][j] == 'O')
                win = 'O';
        }
    }
    if(grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
        if(grid[0][0] == 'X')
            win = 'X';
        else if(grid[0][0] == 'O')
            win = 'O';
    }
    if(grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
        if(grid[0][2] == 'X')
            win = 'X';
        else if(grid[0][2] == 'O')
            win = 'O';
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
        exit(0); //to End the game
    }

}

void userGamePlay() {
    char selectedGrid;

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

}

int main() {

    int gameMode;
//    char username[50];
//
//
//    printf("Welcome to Tic Tac Toe\n");
//    printf("What is your name: ");
//    scanf("%s", &username);

    while (!(gameMode == 1 || gameMode == 2)) {


        printf("\nPlease choose the game mode \n\nPress 1 for User vs User Mode\n\nPress 2 for Computer vs User Mode\n");

        scanf("%d", &gameMode);

    }

    if (gameMode == 1) {
        userGamePlay();
    } else if (gameMode == 2) {
        int level;
        while(!(level == 1 || level ==2)) {
            printf("Please choose between 1-2 for game level: ");
            scanf("%d", &level);
        }
        switch(level) {
            case 1:
                computerGamePlayOne();
                break;
            case 2:
                computerGamePlayTwo();
                break;
            default:
                printf("Invalid Selection!");
        }
    } else {

        printf("Wrong selection");
    }

    showGrid();

    return 0;

}




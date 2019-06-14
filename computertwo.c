#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "game.h"
//
//char grid[3][3] = {{'1', '2', '3'},
//                   {'4', '5', '6'},
//                   {'7', '8', '9'}};

int randomNum() {
    int num;
    srand(time(NULL));
    num = (rand() % 10);

    return num;

}

void computerGamePlay() {
    char selectedGrid;

    printf("\nPlayer 1 is X and Player 2(Computer) is O\n");


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
            printf("\n Player Computer\n");

            char select = randomNum() + '0';

            if(selection(select, 'O') == 1)
                currentPlayer = 2;
            else
                currentPlayer = 1;
        }

        showGrid();
        checkWin();
    }

}

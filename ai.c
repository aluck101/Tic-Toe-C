#include <stdio.h>
#include <stdbool.h>
#include "game.h"

char ai = 'X';
char human = 'O';
struct Move {
    int row, col;
};


int min(int x, int y) {
    if (x < y) {
        return x;
    } else {
        return y;
    }
}

int max(int x, int y) {
    if (x > y) {
        return x;
    } else {
        return y;
    }
}

void clearGrid() {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            grid[i][j] = '0' + i;
        }
    }

}

//To check for draw
int moveLeft() {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (!(grid[i][j] == 'X' || grid[i][j] == 'O')) {
                return 0;
            }
        }
    }
    return 1;
}

int AICheck() {

    for (int i = 0; i < 3; i++) {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2]) {
            if (grid[i][0] == 'X')
                return +10;
            else if (grid[i][0] == 'O')
                return -10;
        }
    }
    for (int j = 0; j < 3; j++) {
        if (grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j]) {
            if (grid[0][j] == 'X')
                return +10;
            else if (grid[0][j] == 'O')
                return -10;
        }
    }
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2]) {
        if (grid[0][0] == 'X')
            return +10;
        else if (grid[0][0] == 'O')
            return -10;
    }
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0]) {
        if (grid[0][2] == 'X')
            return +10;
        else if (grid[0][2] == 'O')
            return -10;
    }

    return 0;
}

int minmaxfunc(int weight, int alpha, int beta, bool isMax) {

    int baseScore = AICheck();

    if (baseScore == 10)
        return baseScore;
    if (baseScore == -10)
        return baseScore;
    if (moveLeft() == 1) {
        return 0;
    }

    if (isMax) {
        int bestMove = -1000;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (!(grid[i][j] == 'X' || grid[i][j] == 'O')) {
                    grid[i][j] = ai;
                    int evaluation = minmaxfunc(weight - 1, alpha, beta, false);
                    bestMove = max(bestMove, evaluation);
                    alpha = max(alpha, bestMove);
                    if (beta <= alpha)
                        break;

                    grid[i][j]; //I am trying to undo the ai move, I will have to not play the game, I can't replace with ' ", cause we rep
                    //our board with numbers. If know how, let me know.
                }
            }
        }
        return bestMove;
    } else {
        int bestMove = 1000;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (!(grid[i][j] == 'X' || grid[i][j] == 'O')) {
                    grid[i][j] = human;
                    int eval = minmaxfunc(weight - 1, alpha, beta, true);
                    bestMove = min(bestMove, eval);
                    beta = min(beta, eval);
                    if (beta <= alpha)
                        break;
                    grid[i][j]; //I am trying to undo the ai move, I will have to not play the game, I can't replace with ' ", cause we rep
                    //our board with numbers. If know how, let me know.
                }
            }
        }
        return bestMove;
    }
}


int aiSelection(char gridElementPosition, char playerType) {

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (!(grid[i][j] == 'O' || grid[i][j] == 'X')) {
                grid[i][j] = gridElementPosition;
//                gridElementPosition = grid[i][j];
                grid[i][j] = playerType;
                return 0;
            }

        }
    }
    return 1;
}

struct Move compMove() {
    int best = -1000;
    struct Move smartMove;
    smartMove.col = -1;
    smartMove.row = -1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (!(grid[i][j] == 'X' || grid[i][j] == 'O')) {
                grid[i][j] = ai;
                int eval = minmaxfunc(1, -1000, 1000, false);

                grid[i][j]; //I am trying to undo the ai move, I will have to not play the game, I can't replace with ' ", cause we rep
                //our board with numbers. If know how, let me know.

                if (eval > best) {
                    smartMove.row = i;
                    smartMove.col = j;
                    best = eval;
                }
            }
        }
    }

    return smartMove;

}

void computerGamePlayTwo() {

    char selectedGrid;


    printf("\nPlayer 1 is X and Player 2(Computer) is O\n");


    while (!(win == 'X' || win == 'O')) {
        printf("\n%c\n", win);
        if (currentPlayer == 1 || currentPlayer == 0) {
            printf("\n Player X\n");
            printf("Please enter the number between 1 - 9: \n");
            scanf("%c", &selectedGrid);
            if (selection(selectedGrid, 'X') == 1)
                currentPlayer = 1;
            else
                currentPlayer = 2;
        } else {
            printf("\n Player Computer\n");

            char pos[compMove().row][compMove().col];

            if (aiSelection(pos, 'O') == 1)
                currentPlayer = 2;
            else
                currentPlayer = 1;
        }

        showGrid();
        checkWin();
    }

}
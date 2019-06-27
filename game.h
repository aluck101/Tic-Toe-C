#ifndef GAME_H_
#define GAME_H_



char ai;
char human;
char win;
int currentPlayer;
char grid[3][3];
int moveLeft();
int AICheck();
int minmaxfun();
void showBoard();
int min(int, int);
int max(int, int);
void showGrid();
void computerGamePlayOne();
void computerGamePlayTwo();
void userGamePlay();
int selection(char, char);
void checkWin();

#endif
#include <stdio.h>

  int main(){

if("User 1 selects (grid[0,0] == 'O' && grid[0,1] == 'O' && grid[0,2] == 'O'){
win = 'O';}
elseif(grid[1,0] == 'O' && grid[1,1] == 'O' && grid[1,2] == 'O'){
win = 'O';}
elseif(grid[2,0] == 'O' && grid[2,1] == 'O' && grid[2,2] == 'O'){
win = 'O';}
elseif(grid[0,0] == 'O' && grid[1,0] == 'O' && grid[2,0] == 'O'){
win = 'O';}
elseif(grid[0,1] == 'O' && grid[1,1] == 'O' && grid[2,1] == 'O'){
win = 'O';}
elseif(grid[0,2] == 'O' && grid[1,2] == 'O' && grid[2,2] == 'O'){
win = 'O';}
elseif(grid[0,0] == 'O' && grid[1,1] == 'O' && grid[2,2] == 'O'){
win = 'O';}
elseif(grid[0,2] == 'O' && grid[1,1] == 'O' && grid[2,0] == 'O'");{
win = 'O';}
  printf("User 1 wins");
}
elseif("User 2 selects ((grid[0,0] == 'X' && grid[0,1] == 'X' && grid[0,2] == 'X')
win = 'X';
elseif(grid[1,0] == 'X' && grid[1,1] == 'X' && grid[1,2] == 'X'){
win = 'X';}
elseif(grid[2,0] == 'X' && grid[2,1] == 'X' && grid[2,2] == 'X'){
win = 'X';}
elseif(grid[0,0] == 'X' && grid[1,0] == 'X' && grid[2,0] == 'X'){
win = 'X';}
elseif(grid[0,1] == 'X' && grid[1,1] == 'X' && grid[2,1] == 'X'){
win = 'X';}
elseif(grid[0,2] == 'X' && grid[1,2] == 'X' && grid[2,2] == 'X'){
win = 'X';}
elseif(grid[0,0] == 'X' && grid[1,1] == 'X' && grid[2,2] == 'X'){
win = 'X';}
elseif(grid[0,2] == 'X' && grid[1,1] == 'X' && grid[2,0] == 'X'"){
win = 'X';}


   printf("User 1 loose");
}
elseif("Computer selects ((grid[0,0] == 'X' && grid[0,1] == 'X' && grid[0,2] == 'X')
win = 'X';
elseif(grid[1,0] == 'X' && grid[1,1] == 'X' && grid[1,2] == 'X'){
win = 'X';}
elseif(grid[2,0] == 'X' && grid[2,1] == 'X' && grid[2,2] == 'X'){
win = 'X';}
elseif(grid[0,0] == 'X' && grid[1,0] == 'X' && grid[2,0] == 'X'){
win = 'X';}
elseif(grid[0,1] == 'X' && grid[1,1] == 'X' && grid[2,1] == 'X'){
win = 'X';}
elseif(grid[0,2] == 'X' && grid[1,2] == 'X' && grid[2,2] == 'X'){
win = 'X';}
elseif(grid[0,0] == 'X' && grid[1,1] == 'X' && grid[2,2] == 'X'){
win = 'X';}
elseif(grid[0,2] == 'X' && grid[1,1] == 'X' && grid[2,0] == 'X'"){
win = 'X';}

   printf("User 1 loose");
}

 else{

  printf("Draw");

}

 return 0;
}
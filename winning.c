
#include <stdio.h>

  int main(){

if("User 1 selects ([0,0]&[0,1]&[0,2]||[1,0]&[1,1]&[1,2]||[2,0]&[2,1]&[2,2]||[0,0]&[1,0]&[2,0]||[0,1]&[1,1]&[2,1]||[0,2]&[1,2]&[2,2]||[0,0]&[1,1]&[2,2]||[0,2]&[1,1]&[2,0]");{

  printf("User 1 wins");
}
elseif("User 2 selects ([0,0]&[0,1]&[0,2]||[1,0]&[1,1]&[1,2]||[2,0]&[2,1]&[2,2]||[0,0]&[1,0]&[2,0]||[0,1]&[1,1]&[2,1]||[0,2]&[1,2]&[2,2]||[0,0]&[1,1]&[2,2]||[0,2]&[1,1]&[2,0]");{

   printf("User 1 loose");
}
elseif("Computer selects ([0,0]&[0,1]&[0,2]||[1,0]&[1,1]&[1,2]||[2,0]&[2,1]&[2,2]||[0,0]&[1,0]&[2,0]||[0,1]&[1,1]&[2,1]||[0,2]&[1,2]&[2,2]||[0,0]&[1,1]&[2,2]||[0,2]&[1,1]&[2,0]");{

   printf("User 1 loose");
}

 else{

  printf("Draw");

}

 return 0;

}
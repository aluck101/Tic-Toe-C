
 #include <stdio.h>


int main(){


int gameMode;

 printf("Welcome to Tic Tac Toe\n");
	
	while(!(gameMode == 1||gameMode == 2)){


 printf("\nPlease choose the game mode \n\nPress 1 for User vs User Mode\n\nPress 2 for Computer vs User Mode\n");

 scanf("%d", &gameMode);
	}		

	if(gameMode == 1) {
	printf("You have selected User vs User Mode");
        }
        else if(gameMode == 2){
        printf("You have selected Computer vs User Mode");
        }
        else{
        printf("Wrong selection"); 
	}
         
 
return 0;   
 
}

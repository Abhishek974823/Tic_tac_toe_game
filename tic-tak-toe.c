#include <stdio.h>
#include <time.h>
void makegame(char array[9]);
void userchoice(char player , char array[9]);
void computerschoice(char computer, char array[9]);
void winner(char array[9]);
int random();
char player = 'x';
char computer='o';
int main(){
    srand(time(NULL));

    
    char array[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' '};
    
    userchoice(player,array);
}
void makegame(char array[9]){
    printf("   |   |   \n");
    printf(" %c | %c | %c \n",array[0],array[1],array[2]);
    printf("___|___|___\n");
    printf("   |   |  \n");
    printf(" %c | %c | %c \n",array[3],array[4],array[5]);
    printf("___|___|___\n");
    printf("   |   |  \n");
    printf(" %c | %c | %c \n",array[6],array[7],array[8]);
    printf("   |   |  \n");
}
void userchoice(char player , char array[9]){
    int y;
    printf("Enter your choice for 1...9\n");
    scanf("%d",&y);
    if(array[y-1]==' '){
        array[y-1]='x';
    }
    else{
        printf("The space is already occupied\n");
        userchoice(player,array);
    }
if(array[0]== ' ' || array[1]== ' ' || array[2]== ' ' || array[3]== ' ' || array[4]== ' ' || array[5]== ' ' || array[6]== ' ' || array[7]== ' ' || array[8]== ' '){
   computerschoice(computer,array);
   
}
   winner(array);
   

}
void computerschoice(char computer,char array[9]){
    int l = random();
    if(array[l]==' '){
        array[l]=computer;
    }
    else{
       computerschoice(computer,array); 
    }
}
int random(){
    int u;
    
    u = rand() % 8;
    return u;
}
void winner(char array[9]){
    
    if(array[0]=='x' && array[1]=='x' && array[2]=='x'){
        makegame(array);
        printf("congrats! you are the winner\n");
    }
    else if(array[0]=='x' && array[3]=='x' && array[6]=='x'){
        makegame(array);
      
        printf("congrats! you are the winner\n");
    }
    else if(array[1]=='x' && array[4]=='x' && array[7]=='x'){
        makegame(array);
        printf("congrats! you are the winner\n");
    }
    else if(array[2]=='x' && array[5]=='x' && array[8]=='x'){
        makegame(array);
        printf("congrats! you are the winner\n");
    }
    else if(array[3]=='x' && array[4]=='x' && array[5]=='x'){
        makegame(array);
        printf("congrats! you are the winner\n");
    }
    else if(array[6]=='x' && array[7]=='x' && array[8]=='x'){
        makegame(array);
        printf("congrats! you are the winner\n");
    }
    else if(array[0]=='x' && array[4]=='x' && array[8]=='x'){
        makegame(array);
        printf("congrats! you are the winner\n");
    }
    else if(array[2]=='x' && array[4]=='x' && array[6]=='x'){
        makegame(array);
        printf("congrats! you are the winner\n");
    }
    else if(array[0]=='o' && array[1]=='o' && array[2]=='o'){
        makegame(array);
        printf("opps! you lost\n");
    }
    else if(array[0]=='o' && array[3]=='o' && array[6]=='o'){
        makegame(array);
        printf("opps! you lost\n");
    }
    else if(array[1]=='o' && array[4]=='o' && array[7]=='o'){
        makegame(array);
        printf("opps! you lost\n");
    }
    else if(array[2]=='o' && array[5]=='o' && array[8]=='o'){
        makegame(array);
        printf("opps! you lost\n");
    }
    else if(array[3]=='o' && array[4]=='o' && array[5]=='o'){
        makegame(array);
        printf("opps! you lost\n");
    }
    else if(array[6]=='o' && array[7]=='o' && array[8]=='o'){
        makegame(array);
        printf("opps! you lost\n");
    }
    else if(array[0]=='o' && array[4]=='o' && array[8]=='o'){
        makegame(array);
        printf("opps! you lost\n");
    }
    else if(array[2]=='o' && array[4]=='o' && array[6]=='o'){
        makegame(array);
        printf("opps! you lost\n");
    }
    else if(array[0]!= ' ' && array[1]!= ' ' && array[2]!= ' ' && array[3]!= ' ' && array[4]!= ' ' && array[5]!= ' ' && array[6]!= ' ' && array[7]!= ' ' && array[8]!= ' '){
        makegame(array);
        printf("It's draw\n");
    }
    else{
        makegame(array);
        userchoice(player,array);
    }
}

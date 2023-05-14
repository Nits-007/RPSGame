#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
#include<time.h>
int res(char you, char comp){
    if(you == comp){
        return 0;
    }
    if(you == 'r' && comp == 's'){
        return 1;
    }
    else if(you == 's' && comp == 'r'){
        return -1;
    }
    if(you == 'p' && comp == 'r'){
        return 1;
    }
    else if(you == 'r' && comp == 'p'){
        return -1;
    }
    if(you == 's' && comp == 'p'){
        return 1;
    }
    else if(you == 'p' && comp == 's'){
        return -1;
    }
}
int main(){
    char You, I;
    int num, result;
    char choice = 'y';
    int i = 0 ;
    int j = 0 ;
    printf("\nWELCOME TO THE MOST LEGENDARY GAME OF ALL TIME\n");
    while(choice == 'y'){
        printf("\nPress 'r' for ROCK, 'p' for PAPER or 's' for SCISSOR\n");
        scanf(" %c", &You);
        srand(time(0));
        num = rand() % 100 + 1;
        if(num < 33){
            I = 'r';
        }
        else if(num >= 33 && num < 66){
            I = 'p';
        }
        else{
            I = 's';
        }
        result = res(You, I);
        printf("\nI chose %c\n", I);
        if(result == 0){
            printf("\nDraw\n");
        }
        else if(result == 1){
            printf("\nYou Won and I Lose\n");
            i ++ ;
        }
        else if(result == -1){
            printf("\nI Won and You Lose\n");
            j ++ ;
        }
        printf("\nDo you want to play again? (y/n)\n");
        scanf(" %c", &choice);
    }
    printf("\nYou won %d times and I won %d times in %d rounds\n" , i , j , i+j);
    printf("\nThanks for playing with me\n");
    return 0;
}

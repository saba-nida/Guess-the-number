// number guessing game

#include<stdio.h>
#include<stdlib.h> // random numbers
#include<time.h>
int main(){
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100 +1;// generates a number between 1 to 100
    // printf("the number is %d",number);
    // keep running the loop until the number is guessed
    do{
        printf("guess the number 1 to 100 ");
        scanf("%d",&guess);
        if (guess>number){
            printf("lower number pls \n");
        }
        else if (guess<number){
            printf("higher number pls \n");
        }
        else{
            printf("u guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);
    return 0;
}

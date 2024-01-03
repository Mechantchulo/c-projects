#include<stdio.h>
#include<windows.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int number_to_guess,user_guess,attempts=0;

    //seed random number generation..we use srand()function

    /*we allocate the srand with the arguement null so as to get
    different numbers to guess each time the program is run.*/

    srand(time(NULL));

    /*generating the random number.We use the rand()%100 +1 which makes
    sure the number to be generated is at least 1 and in the range 1-100.*/

    number_to_guess = rand() % 100 + 1;

    printf("Welcome to this guessing game:)\n");

    do{

        printf("\nEnter the value: ");
        scanf("%d", &user_guess);

        //check if the user is correct or not

        if(user_guess == number_to_guess){
            printf("\nCongratulations! You guessed the right number:)");
            break;


        }else if(user_guess<number_to_guess){
            printf("\nInput lower than the number generated:(");

        }else if(user_guess>number_to_guess){
            printf("\nInput greater than the number to generated:(");
        }

        attempts++;

    }   while(1);/*We use the while(1) to produce an infinte loop which will break only if the user
    guesses the correct number that the srand generator seeds.*/


    return 0;
}
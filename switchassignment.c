#include<stdio.h>

int main(){

    char grade;

    printf("\nEnter grade:");
    scanf("%c", &grade);


    switch(grade){
        case 'A':
        printf("score range is 70 to 100");
        break;

        case 'B':
        printf("Score range is 60-70");
        break;

        case 'C':
        printf("Score range is 50-59");
        break;

        case 'D':
        printf("Score range is 40-49");
        break;

        default:
        printf("Fail");
        break;



    }

    

}
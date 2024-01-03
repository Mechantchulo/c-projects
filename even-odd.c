/*Write a program that allows the user to input a number and if the number is even 
it displays "The number is even" and if it is odd it displays "The numebr is odd"*/


#include<stdio.h>

int main(){
    int num;

    printf("\nEnter the value of the number: ");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("\nThe number is even");
    }else{
        printf("\nThe number is odd");
    }

    return 0;
}

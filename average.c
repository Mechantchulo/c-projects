//write a program that prints whether a person has failed or passed after getting average of their 3 scores.

#include<stdio.h>

int main(){
// we declare the variables.
    int a;
    int b;
    int c;
    double average;

    printf("Enter the value a:"); //prompt the user to enter the value of a. 
    scanf("%d", &a);

    printf("Enter value of b:"); //prompt the user to input the value of b.
    scanf("%d", &b);

    printf("Enter the value of c:"); //prompt the user to input the value of c.
    scanf("%d", &c);

    average = (a+b+c)/3; //we calculate the average of the three marks.
    printf("Average:%.2lf\n",average);

if(average>=50){
    printf("You passed!");
}else if(average < 50){
    printf("You failed!");
}


}
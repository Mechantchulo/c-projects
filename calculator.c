/*Write a simple c calculator that performs simple arithmetic operations 
like addition,subtraction,multiplication and division.*/

#include<stdio.h>

int main(){
    //we want somenone tochoose from the options below

    double num1,num2;
    char operator;
 
    //now let's give the directive on which operator to use

    printf("\nEnter operator of your choice(/,+,*,-):");
    scanf("%c", &operator);

    //we now ask the user to input the num 1 and num 2
    printf("num1\n:");
    scanf("%lf", &num1);

    printf("num2\n:");
    scanf("%lf", &num2);

    //we use switch case in plae of if statements
    switch(operator){
        case '+':
        printf("%.2lf + %.2lf = %.2lf", num1,num2, num1+num2);
        break;

        case '-':
        printf("%.2lf - %.2lf = %.2lf", num1,num2,num1 - num2);
        break;

        case '/':
        printf("%.2lf / %.2lf = %.2lf", num1,num2, num1 / num2);
        break;

        case '*':
        printf("%.2lf * %.2lf = %.2lf",num2,num2,num1 * num2);
        break;

       
    }   

  
   
}
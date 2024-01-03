/*Write a program that reads an integer n, then passes it to a function which returns the value
n to the power of 2.The calling function then confirms the returned value by 
computing and displaying its squareroot*/

#include<stdio.h>
#include<math.h>
#include<stdbool.h>

//function to perform the square of the number.
int power(int x){
   return x * x;
}

//function to perform the square root of the result.
double squareroot(int x){
    return sqrt(x * x);
    
    
}

int main(){
     
     //declaration of the variables to be used in the program. 
    int x,square;
    double root;
    
    printf("\nEnter value x:");
    scanf("%d", &x);

    bool condition = true;

    if(condition){
        square = power(x);
        root = squareroot(x);

        //displaying the results of the computations.
        printf("\nThe square of x is %d",square);
        printf("\nThe square root of the result above is %.2lf",root);

    }else{
        printf("\nInvalid!!");
    }

    return 0;

}
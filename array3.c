/*Write a program which reads in 15 integers to a two dimensional array.Say the array was declared as valueMe[3][5]
It then computes and displays the sum and the average.*/

#include<stdio.h>

int main(){
    int i,j,valueMe[3][5],sum = 0;//declaration of the variables i and j which are control structures
    float average;

    for(i=0; i<3; ++i){
        for(j = 0; j<5; ++j){
            printf("Enter values:");
            scanf("%d", &valueMe[i][j]);

            sum = sum + valueMe[i][j];
        }
    }

    average = sum/15.0;
    printf("Sum is %d\n", sum);
    printf("Average is %.2f\n", average);
}

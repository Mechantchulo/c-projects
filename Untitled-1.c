#include<stdio.h>

/*Program which reads in seven real values to an array named valueMe,
computes the sum and average then display them on the screen.*/



int main(){

    int i, valueMe[7],  sum = 0 ;
    
    float average;

    printf("\nEnter values:\n");
    for(i = 0; i < 7 ; i++){
         scanf("%d", &valueMe[i]);
         sum = sum + valueMe[i];
    }

      average = sum /7.0;

        printf("\nSum of numbers is:%d",sum);
        printf("\nThe average is:%.2f",average);
    }





    

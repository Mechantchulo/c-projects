#include<stdio.h>

int main(){

    int i,j,valueMe[3][5], sum = 0;
    float avg;

    printf("Enter values:");

    for(i=0;i<3;i++){
        for(j=0;j<5;j++){

            scanf("%d", &valueMe[i][j]);

            sum = sum + valueMe[i][j];
            

        }
    }
    
    

    avg = sum/15.0;
    printf("\nThe sum is:%d", sum);
    printf("\nAvg:%.2f", avg);
}

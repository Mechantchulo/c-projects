/* A program that initiliazes length and width and outputs the area on the scree.
If the area is greater than 50 print out "Too large,reduce it", otherwise display "Correct space".*/

#include<stdio.h>

int main(){
    int l = 4;
    int w = 4;
    int A = l * w;

    printf("%d\n",A);

    if(A>50){
        printf("Too large,reduce it");
    } else{
        printf("Correct space");
    }

}
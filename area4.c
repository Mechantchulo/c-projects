/* A program that initiliazes length and width and outputs the area on the scree.
If the area is greater than 50 print out "Too large,reduce it", otherwise display "Correct space".
Now rewrite it to prompt the user to input the inputs*/

#include<stdio.h>
int main(){

    int l;
    int w;
    int A;

    printf("Enter value l:");
    scanf("%d", &l);

    printf("Enter value w:");
    scanf("%d", &w);


    printf("Area A:%d\n", A = l * w);

    if(A>50){
        printf("Too large,reduce it");
    
    } else {
        printf("Correct space");
    }
}

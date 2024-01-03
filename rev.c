/*Write a c program that reads 4 integers to an array defined as ar[4], then
displays only even array values*/

#include <stdio.h>

int main() {
    int i, ar[4];
    
    // Reading 4 integers into the array
    printf("Enter four integers:\n");
    for ( i = 0; i < 4; i++) {
        printf("Enter integer #%d: ", i + 1);
        scanf("%d", &ar[i]);
    }

    // Displaying even values
    printf("Even array values:\n");
    for (i = 0; i < 4; i++) {
        if (ar[i] % 2 == 0) {
            printf("%d\n", ar[i]);
        }
    }

    return 0;
}





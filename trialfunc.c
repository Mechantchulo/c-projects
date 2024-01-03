#include <stdio.h>
#include <math.h>

// Function to calculate the square of a number
double calculateSquare(int n) {
    return n * n;
}

int main() {
    int n;

    // Get input from the user
    printf("Enter an integer: ");
    scanf("%d", &n);

    // Calculate the square using the function
    double square = calculateSquare(n);

    // Display the calculated square
    printf("Square of %d is: %.2lf\n", n, square);

    // Confirm the result by computing and displaying the square root
    double squareRoot = sqrt(square);
    printf("Square root of %.2lf is: %.2lf\n", square, squareRoot);

    return 0;
}
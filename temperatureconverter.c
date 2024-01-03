#include<stdio.h>
#include<unistd.h>
#include<windows.h>
#include<stdlib.h>

int main(){

    //initialization of the temperature options
    float celsius,fahrenheit;
   

    printf("\nEnter temperature value in celsius: ");
    scanf("%f", &celsius);

    //temperature conversion

    fahrenheit = ( celsius * 9/5  + 32);
    
    //displaying the results of the conversion from celsius
    
    printf("\nTemperature in celsius is %.2f",celsius);
    printf("\nTemperature to fahrenheit is %.2f",fahrenheit);
    return 0;
}
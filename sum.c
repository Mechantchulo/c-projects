/*write a program that reads in your age then computes your age in the next birthday*/

#include<stdio.h>

int main(){
    int age;
    //next_age = age +1;

    printf("Type in your age: ");
    scanf("%d", &age);


    age += 1;
    printf("\nNext year you are turning %d\n",age);
    
}
/*Write a program that reads in a student's grade.
if student scores an A then the system displays "Your mrk is between 70 and 100".else if a student 
scores a B system then displays"Mark between 60 and 69" otherwise it displays other grades.*/

#include<stdio.h>

int main(){
    char grade;

    printf("Enter your grade:");
    scanf("%c",&grade);

    if(grade == 'A'){
        printf("Your mark is between 70 and 100");

    } else if(grade == 'B'){
        printf("Mark between 60 and 69");

    } else{
        printf("Other grades");
    }

    return 0; 
}
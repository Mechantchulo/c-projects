/*Write a program that reads in a student's grade.
if student scores an A then the system displays "Your mrk is between 70 and 100".else if a student 
scores a B system then displays"Mark between 60 and 69" otherwise it displays other grades.
Then convert to switch case.*/

#include<stdio.h>

int main(){
    char grade;

    printf("Enter your grade:");
    scanf("%c",&grade);

    if(grade == 'A'){
        grade =  1;
    }else if(grade == 'B'){
        grade = 2;
    }else{
        grade  = 3;
    }/*In if statement we use a single quotation instead of double.This is for single character literals 
    and double quotes for string literals.*/ 

    switch(grade){
        case 1:
        printf("Marks between 70 and 100\n");
        break;

        case 2:
        printf("Marks between 60 and 69\n");
        break;

        case 3:
        printf("Other grades\n");
        break;
    }
}
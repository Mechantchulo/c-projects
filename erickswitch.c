#include<stdio.h>

//a program that prints remarks according to the grade scored using the switch-case statements.

int main(){
    char grade;

    printf("Enter your grade:");
    scanf("%c", &grade);

    if(grade == 'A'){
        

        grade = 1;
        

    } else if(grade == 'B'){
        grade = 2;

    }else if(grade == 'C'){
        grade = 3;

    }else if(grade == 'D'){
        grade = 4;
    }else{

        printf("Enter the valid input");
        
    }
    

    switch(grade){
        case 1:
        printf("EXCELLENT!");
        break;

        case 2:
        printf("GOOD!");
        break;

        case 3:
        printf("AVERAGE!");
        break;

        case 4:
        printf("FAIL!");
        break;

    }


}
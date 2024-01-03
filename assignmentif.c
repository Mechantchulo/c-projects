#include<stdio.h>

int main(){
    char grade;

    printf("\nEnter the grade:");
    scanf("%c",&grade);

    if(grade == 'A'){
        printf("Score range is 70-100");
    }else if( grade =='B'){
        printf("Score range is 60-70");
    }else if(grade == 'C'){
        printf("Score range is 50-59");
    }else if(grade == 'D'){
        printf("Score range is 40-49");
    }else{
        printf("Fail");
    }
}
/*Write a program that initializes these terms (your name,adm number,age,course and faculty)
then displayson the screen using the format
name: 
adm: 
age:
course: 
faculty:
*/

#include<stdio.h>
int main(){
    //we declare the variables here.
    //we use arrays to specify the maximum number of characters to be used in the following variables.
    char name[20];
    char ADM[20];
    int age;
    char course[100];
    char faculty[20];

   
   


    printf("\nname:");
    fgets(name,20,stdin);//gets mostly is used with getting the space character which cannot be read by the scanf.
    

    
    printf("\nADM:");
    fgets(ADM,20,stdin);//i use gets to write both the strings and symbols
    
    printf("\nenter your Course:");
    fgets(course,100,stdin);
    
    printf("\nage:");
    scanf("%d",&age);
    

     

    printf("\nfaculty:");
    scanf("%s",faculty);

    //we print a new line because we want to separate the above code with the output of the above code.

    printf("\n");
    printf("\n");


    //we print out the above input of the declared variables.
    printf("name:%s\n", name);
    printf("ADM:%s\n",ADM);
    printf("age:%d\n", age);
    printf("\ncourse:%s\n",course);
    printf("faculty:%s\n", faculty);

    return 0;
    

}
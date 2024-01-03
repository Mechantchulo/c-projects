/*Write a c program that reads two integers, a and b in the main function then passes them as arguments
to a function which computes their product.If product is greater than fifteen, it displays the values of
a and b annd the product.Then passes the control back to the calling function (main()) which displays the 
string "incremented".*/

#include<stdio.h>

/*Function declaration*/

int add(int a,int b){

return a + b;

}

int main(){
    
    /*Local variables declaration*/

    int a,b,sum;
    
    

    printf("\nEnter value a:");
    scanf("%d", &a);
    

    printf("\nEnter value b:");
    scanf("%d", &b);

    
    sum = add(a,b);

    if(sum > 15){

    printf("\nValue a:%d",a);
    printf("\nValue b:%d",b);
    printf("\nsum:%d", sum);
    printf("\nIncremented");

    }
    
    
return 0;
    
}


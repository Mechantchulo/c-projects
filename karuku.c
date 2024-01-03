#include<stdio.h>

int main(){

    int a = 07;
    int b = 46;
    int c = 14;


    if(a>c && a>b){
        printf("%d\n",a);


    } else if(b>a && b>c){
        printf("%d\n",b);

    
    } else if(c>a && c>b){
        printf("%d\n", c);
        
    }


}
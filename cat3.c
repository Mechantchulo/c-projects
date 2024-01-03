#include<stdio.h>

int main(){
    int a =2;
    int sum = 0;

    do{
        printf("%d", sum);
        sum+=a;
        ++a;
    }
    while(a<50);

    
    return 0;
}
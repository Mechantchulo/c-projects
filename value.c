#include<stdio.h>
int main(){
    char s;
    int x;
    float f;

    printf("enter value s:");
    scanf("%c", s);

    printf("Enter value x:");
    scanf("%d", &x);

    printf("\nenter value f:");
    scanf("%f", f);

    printf("\n");

    printf("VALUE s:%c", &s);
    printf(" Value x:%d",&x);
    printf("Value f:%f", &f);

}
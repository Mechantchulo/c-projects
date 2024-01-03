
#include<stdio.h>
#include<windows.h>

int main(){
    //let's create the normal hour,min, and sec like in a normal clock

    int h,m,s;

    int d = 1000; //we put a delay of 1000 ms which we use later in a function called sleep

    printf("set time: \n");
    scanf("%d%d%d", &h,&m,&s);

    if(h>12 || m>60 || s>60){
        printf("Error!\n");
        exit(0);

    } 

    while(1) //this is an infinite loop and it will repeat itself till infinity
    {
        s++;
        if(s>59){
            m++;
            s = 0;
        }

        if(m>59){
            h++;
            m = 0;
        }

        if(h>12){
            h = 1;
        }

        printf("\n Clock: ");
        printf("\n %02d:%02d:%02d", h,m,s);//writes our time in the format 00:00:00
        Sleep(d);//slows down the clock to make it look real.

        system("cls");// this clears the screen

    }

return 0;
}
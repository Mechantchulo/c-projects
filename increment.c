//Tool that increments t by 2.5. If d is greater than or equalto 150.0;if d is between 50.0 and 150.0 increment t by 3.0,
//otherwise increment t by 1.5


//user input


#include<stdio.h>
int main(){
    int d;
    float t= 0;

    printf("Enter the value of d:");
    scanf("%d", &d);

    if(d>=150){
        t += 2.5;

    } else if(d >= 50 && d <=149){
        t +=3.0;

    } else if(d<50){
        t += 1.5;
    } else{
        printf("\nINVALID INPUT!!");
    }

    


    printf("The final value of y after increment based on the range is:%.3f\n",t);

    return 0;
}
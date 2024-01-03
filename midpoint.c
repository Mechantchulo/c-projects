//Write a program that calculates th midpoint of a line using co-ordinates.

#include<stdio.h>

//We declare the 2D coordinates as variables

int main(){

float X1D;
float Y1D;
float X2D;
float Y2D;
float midpoint_X;
float midpoint_Y;


printf("\nInput the value of X1D:");
scanf("%f", &X1D);

printf("\nInput the value of Y1D:");
scanf("%f", &Y1D);

printf("\nInput the value of X2D:");
scanf("%f", &X2D);

printf("\n the value of Y2D:");
scanf("%f", &Y2D);

midpoint_X = (X1D+X2D)/2;
midpoint_Y = (Y1D+Y2D)/2;

printf("\nThe midpoint is(%.3f,%.3f)\n:", midpoint_X,midpoint_Y);


}
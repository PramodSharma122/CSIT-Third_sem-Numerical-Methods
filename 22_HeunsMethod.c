// Heun's Method.

#include<stdio.h>
#define f(x,y) 2*y/x
void main() {
    float x,y,h,xn,l;
    printf("Program for solution of ordinary differential equation\n Heun's method\n");
    printf("Enter value for x and y: ");
    scanf("%f%f",&x,&y);
    printf("Enter value for h and last of x: ");
    scanf("%f%f",&h,&xn);
    while(x+h<=xn) {
        l=(h/2)*(f(x,y)+f(x+h,y+h*f(x,y)));
        y=y+1;
        x=x+h;
        printf("y= %f x= %f ",y,x);
    }
}
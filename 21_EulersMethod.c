// Euler's Method.

#include<stdio.h>
float fun(float x, float y) {
    float f;
    f=x+y;
    return f;
}
int main() {
    float a,b,x,y,h,t,k;
    printf("Enter x0,y0,h,xn: ");
    scanf("%f%f%f%f",&a,&b,&h,&t);
    x=a;
    y=b;
    printf("x y\t");
    while(x<=t) {
        k=h*fun(x,y);
        y=y+k;
        x=x+h;
        printf("%.3f %.3f ",x,y);
    }
}
// Simpson's 3/8 Rule. (LAB-3)

#include<stdio.h>
#include<math.h>
float f(float x) {
    return (1/x);
}
void main() {
    float a,b,h,s=0,s1;
    int i,n;
    printf("Enter no. of interval: ");
    scanf("%d",&n);
    printf("Enter lower limits: ");
    scanf("%f",&a);
    printf("Enter upper limits: ");
    scanf("%f",&b);
    h=(b-a)/n;
    s=f(a)+f(b);
    printf("\n %.3f\t %.3f",a,f(a));
    for(i=1;i<n;i++) {
        if(i%3==0)
            s=s+2*f(a+i*h);
        else {
            s=s+3*f(a+i*h);
            printf("\n %.3f\t%.3f",a+i*h,f(a+i*h));
        }
    }
    printf("\n %.3f\t%.3f",b,f(b));
    s1=((3*h)/8)*s;
    printf("\n %f",s1);
    printf("\n");
}
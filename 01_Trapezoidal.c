// Trapezoidal Rule.(LAB-1)

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
    printf("%.3f\t%.3f",a,f(a));
    for(i=1;i<n;i++) {
        s=s+2*f(a+i*h);
        printf("%.3f\t%.3f",a+i*h,f(a+i*h));
    }
    printf("%.3f\t%.3f",b,f(b));
    s1=(h/2)*s;
    printf("%f\n",s1);
}
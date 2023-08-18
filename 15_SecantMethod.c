// Secant Method. (LAB-15)

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f(x) x*x*x-2*x-5

void main() {
    float x0,x1,x2,f0,f1,f2,e;
    int step=1,N;
    printf("Enter initial Guesses: ");
    scanf("%f%f",&x0,&x1);
    printf("Enter tolerable error: ");
    scanf("%f",&e);
    printf("Enter maximum iteration: ");
    scanf("%d",&N);
    printf("Step\tx0\tx1\tx2\t f(x2)\n");
    do {
        f0=f(x0);
        f1=f(x1);
        if (f0==f1) {
            printf("Mathematical Error.");
            exit(0);
        }
        x2=x1-(x1-x0)*f1/(f1-f0);
        f2=f(x2);
        printf("%d\t %f\t %f\t %f\t %f\n",step,x0,x1,x2,f2);
        x0=x1;
        f0=f1;
        x1=x2;
        f1=f2;
        step=step+1;
        if(step>N) {
            printf("Not Convergent.");
            exit(0);
        }
    }
    while(fabs(f2)>e);
    printf("Root is: %f",x2);
}
// Bisection Method. (LAB-5)

# include<stdio.h>
#include <math.h>
float f(float x) {
    return (pow (x,3) -9* pow (x,2) -10);
}
void main() {
    int i=0;
    float x1,x2,x3;
    printf("\nEnter initial approximations: ");
    scanf ("%f %f",&x1,&x2);
    if (f(x1) * f (x2)>0)
        printf("\n No solution exist in this approximation");
    else {
        do {
            i++;
            x3=(x1 + x2)/2;
            printf("%d\t %f\t %f\t %f\t %f\t %f\t %f\n",i,x1,f(x1), x2,f(x2),x3,f(x3));
            if (f(x3) * f(x1)>0)
            x1=x3;
            else
            x2=x3;
        }
        while (fabs (f (x3)) >0.001);
    }
}
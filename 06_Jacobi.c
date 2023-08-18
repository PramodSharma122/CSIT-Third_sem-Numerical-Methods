// Jacobi Method. (LAB-6)

#include<stdio.h>
#include <math.h>
float fx (float, float);
float fy (float, float);
float fz(float, float);
void main() {
    float x=0, y = 0, z=0, xn, yn, zn;
    int n, i;
    printf ("enter no of iteration: ");
    scanf("%d", &n);
    for (i=1; i <= n; i++) {
        xn = fx(y, z);
        yn = fy (x,z);
        zn = fz(x,y);
        x=xn;
        y=yn;
        z=zn;
    }
    printf ("\n %f\n %f\n %f", x, y, z);
}
float fx (float y, float z) {
    return (17-y+2*z)/20;
}
float fy (float x, float z) {
    return (-18-3*x+z)/20;
}
float fz (float x, float y) {
    return (25-2*x+3*y)/20;
}
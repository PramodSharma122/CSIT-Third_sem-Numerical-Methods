// Gauss Seidel Method. (LAB-4)

#include <stdio.h>
#include <math.h>
float fx (float, float);
float fy (float, float);
float fz (float, float);
void main() {
    float x=0,y=0, z=0, xn, yn, zn;
    int n, i;
    printf("enter no. of iteration: ");
    scanf ("%d", &n);
    for (i=1; i <= n; i++) { 
        x = fx (y, z);
        y = fy (x, z);
        z = fz (x, y);
    }
    printf("\n %f \n %f\n %f",x,y,z);
}

float fx(float y, float z)
{
    return (( 17-y+2*z)/20);
}
float fy (float x, float z)
{
    return ((-18-3*x+2)/20);
}
float fz (float x, float y)
{
    return ( ( 25-2*x +3*y) / 20);
}
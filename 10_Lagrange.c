// Lagrange Interpolation. (LAB-10)

#include<stdio.h>
#define N 15
void main() {
    float x[N],y[N],X,res=0,num,den;
    int i,j,n;
    printf("Enter the no. of terms: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) {
        printf("Enter %d term x and y value: ",i);
        scanf("%f%f",&x[i],&y[i]);
    }
    printf("Enter the value of x for which f(x) is to be calculated: ");
    scanf("%f",&X);
    for(i=0;i<n;i++) {
        num=1;
        den=1;
        for(j=0;j<n;j++) {
            if(i!=j) {
                num*=X-x[j];
                den*=x[i]-x[j];
            }
        }
        res=res+(num/den)*y[i];
    }
    printf("Value of f(%.2f):%.3f",X,res);
}
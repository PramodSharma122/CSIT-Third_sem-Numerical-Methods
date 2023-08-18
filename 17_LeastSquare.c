// Least Square Linear Fitting. (LAB-17)

#include<stdio.h>
#define S 50
int main() {
    int n,i;
    float x[S],y[S],sumX=0,sumX2=0,sumY=0,sumXY=0,a,b;
    printf("How many data points? ");
    scanf("%d",&n);
    printf("Enter data: \n");
    for(i=1;i<=n;i++) {
        printf("x[%d]= ",i);
        scanf("%f",&x[i]);
        printf("y[%d]= ",i);
        scanf("%f",&y[i]);
    }
    for(i=1;i<=n;i++) {
        sumX=sumX+x[i];
        sumX2=sumX2+x[i]*x[i];
        sumY=sumY+y[i];
        sumXY=sumXY+x[i]*y[i];
    }
    b=(n*sumXY-sumX*sumY)/(n*sumX2-sumX*sumX);
    a=(sumY-b*sumX)/n;
    printf("Values are: a=%.2f and b=%.2f \n",a,b);
    printf("Equation of best fit is: y=%.2f + %.2fx\n",a,b);
}
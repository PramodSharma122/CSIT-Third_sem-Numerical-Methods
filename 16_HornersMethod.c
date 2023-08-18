// Horner's Method. (LAB-16)

#include<stdio.h>
int main() {
    float a[100],sum=0,x;
    int n,i;
    printf("Enter degree of the polynomial X:: ");
    scanf("%d",&n);
    printf("Enter coefficient's of the polynomial X:: \n");
    for(i=n;i>=0;i--) {
        printf("Enter coefficient of [x^%d]:: ",i);
        scanf("%f",&a[i]);
    }
    printf("Enter the value of X:: ");
    scanf("%f",&x);
    for(i=n;i>0;i--) {
        sum=(sum+a[i])*x;
    }
    sum=sum+a[0];
    printf("Value of the polynomial is =[%f] \n",sum);
}
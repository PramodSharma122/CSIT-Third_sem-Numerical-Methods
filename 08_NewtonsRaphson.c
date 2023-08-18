// Newton Raphson's Method. (LAB-8)

#include<stdio.h>
#include<math.h>
float f(float a);
float y(float a);
int main() {
    float a;
    int i=0;
    printf("Enter a number: ");
    scanf("%f",&a);
    printf("%d\t %.4f\t %.4f\t %.4f\n",i,a,f(a),y(a));

    do {
        a=a-f(a)/y(a);
        printf("%d\t %.4f\t %.4f\t %.4f\n",i+1,a,f(a),y(a));
        i++;
    }
    while(fabs(f(a))>=0.0001);
    printf("Number of interations are %d\n",i);
    printf("Root is %f\n",a);
    return 0;
}
float f(float a) {
    return(a*a*a-3*a-10);
}
float y(float a) {
    return(3*a*a-3);
}
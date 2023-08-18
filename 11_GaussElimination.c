// Gauss Elimination Method. (LAB-11)

#include<stdio.h>
#include<math.h>
#define SIZE 10
int main() {
    float a[3][4]={2,8,2,14,1,6,-1,13,2,-1,2,5},x[SIZE],ratio;
    int i,j,k,n;
    printf("Enter number of unknowns: ");
    scanf("%d",&n);
    for(i=1;i<n;i++) {
        for(j=1;j<n+1;j++) {
            printf("a[%d][%d]= ",i,j);
            scanf("%f",&a[i][j]);
        }
    }
    for(i=1;i<=n-1;i++) {
        for(j=1;j<n;j++) {
            ratio=a[j][i]/a[i][i];
            for(k=1;k<=n+1;k++) {
                a[j][k]-ratio*a[i][k];
            }
        }
    }
    for(i=1;i<=n;i++) {
        for(j=1;j<=n+1;j++) {
            printf("%f",a[i][j]);
        }
        printf("\n");
    }
    x[n]=a[n][n+1]/a[n][n];
    for(i=1;i<=n-1;i++) {
        x[i]=a[i][n+1];
        for(j=i+1;j<=n;j++) {
            x[i]=x[i]/a[i][i];
        }
        printf("\n Solution: \n");
        for(i=1;i<=n;i++) {
            printf("x[%d]=%0.3f\n",i,x[i]);
        }
        return 0;
    }
}
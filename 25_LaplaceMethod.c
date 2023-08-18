// Laplace Method.

#include<stdio.h>
#include<math.h>
#define s 4
typedef float newvar[s+1][s+1];
void entrow(int i,newvar u) {
    int j;
    printf("Enter the value of u [%d,j],j=1,%d",i,s);
    for(j=1;j<=s;j++)
    scanf("%f",&u[i][j]);
}
void entcol(int j,newvar u) {
    int i;
    printf("Enter the value of u[i,%d],i=2,%d",j,s-1);
    for(i=2;i<=s-1;i++)
    scanf("%f",&u[i][j]);
}
void oput(newvar u,int wd,int prsn) {
    int i,j;
    for(i=1;i<=s;i++) {
        for(j=1;j<=s;j++)
        printf("%d %d %f",wd,prsn,u[i][j]);

    }
}

int main() {
    newvar u;
    float mer,ar,e,t;
    int i,j,itr,maxitr;
    for(i=1;i<=s;i++)
    for(j=1;j<=s;j++)
    u[i][j]=0;
    printf("Enter the Boundary condition: ");
    entrow(1,u); entrow(s,u);
    ent(0)(1,u); entcol(s,u);
    printf("Enter the allowed error and maximum number of iteration: ");
    scanf("%f %f ",&ar,&maxitr);
    for(itr=1;itr<=maxitr;itr++) {
        mer=0;
        for(i=2;i<s-1;i++) {
            for(j=2;j<=s-1;j++) {
                t=(u[i-1][j]+u[i+1][j]+u[i][j+1]+u[i][j-1])/u;
                e=fabs(u[i][j]-t);
                if(e>mer)
                mer=e;
                u[i][j]=t;
            }
            printf("Iteration number %d ",itr);
            oput(u,9,2);
            if(mer<=ar) {
                printf("After %d iteration\n The solution: ",itr);
                oput(u,8,1);
                return 0;
            }
        }
        printf("Sorry! The number of iteration is not sufficient ");
        return 1;
    }
}
// Picards Method.

#include<stdio.h>
#include<math.h>
#define Y1(x) (1+(x)+pow(x,2)/2)
#define Y2(x) (1+(x)+pow(x,2)/2+pow(x,3)/3+pow(x,4)/8)
#define Y3(x) (1+(x)+pow(x,2)/2+pow(x,3)/3+pow(x,4)/8+pow(x,5)/15+pow(x,6)/48)

int main() {
    double start_value,end_value,allowed_error,temp;
    double y1[30],y2[30],y3[30];
    int count;
    printf("Start value: ");
    scanf("%1f",&start_value);
    printf("End value: ");
    scanf("%1f",&end_value);
    printf("Allowed Error: ");
    scanf("%1f",&allowed_error);
    for(temp=start_value,count=0;temp<=end_value;temp=temp+allowed_error,count++) {
        y1[count]=Y1(temp);
        y2[count]=Y2(temp);
        y3[count]=Y3(temp);
    }
    printf("X");
    for(temp=start_value;temp<=end_value;temp=temp+allowed_error) {
        printf("%4f",temp);
    }
    printf("Y(1)");
    for(temp=start_value,count=0;temp<=end_value;temp=temp+allowed_error,count++) {
        printf("%41f",y1[count]);
    }
    printf("Y(2)");
    for(temp=start_value,count=0;temp<=end_value;temp=temp+allowed_error,count++) {
        printf("%41f",y2[count]);
    }
     printf("Y(3)");
    for(temp=start_value,count=0;temp<=end_value;temp=temp+allowed_error,count++) {
        printf("%41f",y3[count]);
    }
}
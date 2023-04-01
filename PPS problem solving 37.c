#include <stdio.h>
int main()
{
    //all these variables are for number input
    int a,b,c,d,e,f,g,h,i,j;
    printf("Enter 10 integers:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);

    int sum=a+b+c+d+e+f+g+h+i+j;
    double avg=sum/10;

    printf("sum is %d.\nAverage is %0.3f",sum,avg);

    return 0;
}

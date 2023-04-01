#include<stdio.h>
int main()
{
    int a, b, c;
    float sum,avg;
    sum=a+b+c;
    avg=sum/3;
    printf("ENter 3 numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("sum of those numbers are: %d\n",sum);
    printf("Average of those numbers are: %.3f\n",avg);
}

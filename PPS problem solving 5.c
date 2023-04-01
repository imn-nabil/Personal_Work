#include<stdio.h>
int main()
{
    double x,y;

    printf("Enter two numbers: ");
    scanf("%lf %lf",&x,&y);

    (x>y)? printf("%0.5f is larger than %0.5f",x,y) : printf("%0.5f is larger than %0.5f",y,x);

    return 0;
}


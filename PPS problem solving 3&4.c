#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    printf("THe average of those three numbers is: %0.4f",(a+b+c)/3);

    return 0;
}

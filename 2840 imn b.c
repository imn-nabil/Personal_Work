#include<stdio.h>
#include<math.h>
//#define

int main()
{
    int x,l;
    double vol;
    scanf("%d %d",&x,&l);

    vol=(4.0/3.0)*3.14159*x*x*x;

    printf("%d\n",vol);

    return 0;
}



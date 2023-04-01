#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()

{
    double a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);

    double D=(b*b)-4*a*c;
    double t=sqrt(D);
    double root1=(-b+t)/(2*a);
    double root2=(-b-t)/(2*a);

    if(D<0 || a==0){
        printf("Impossivel calcular\n");
    }
    else {
        printf("R1 = %0.5lf\nR2 = %0.5lf\n",root1,root2);
    }

    return 0;
}


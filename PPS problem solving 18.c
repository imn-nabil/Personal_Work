#include<stdio.h>

int main()
{
    double upto_f,i,buff,fibonakki,n1=0,n2=1;

    printf("How long would you like the series to be:\t");
    scanf("%lf",&upto_f);

    printf("%0.0f\n%0.0f\n",n1,n2);
    for(i=1;i<=(upto_f-2);i++){

//amne ami lekhsi
        fibonakki=n1+n2;
        buff=n1;
        n1=n2;
        n2=buff+n2;

//amne google a paisi
/*
        n1=n2;
        n2=fibonakki;
        fibonakki=n1+n2;
*/
        printf("%0.0f\n",fibonakki);
    }

}

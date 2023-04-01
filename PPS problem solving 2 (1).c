#include<stdio.h>
 int main()
 {
    double base, interest, year;
    printf("What is the base amount of your loan? :\t");
    scanf("%lf",&base);

    printf("What is the interest rate? :\t");
    scanf("%lf",&interest);

    printf("For how many years did you take the loan for? :\t");
    scanf("%lf",&year);

    double simple_int=(base*interest/100*year);
    double to_pay=(base+simple_int );
    printf("\n\nSimple interest is %lf\n",simple_int);
    //printf("You'll have to pay a total of %0.3f after %0.0f years.\nIn other words, you'll have to pay %0.3f monthly.",to_pay,year,to_pay/year/12);

    return 0;
 }

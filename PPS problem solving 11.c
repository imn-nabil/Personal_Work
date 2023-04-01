#include<stdio.h>
int main()
{
    double a,b,c;
    printf("Enter three number:\t");
    scanf("%lf %lf %lf",&a,&b,&c);

    if(a>=b){
        if(a>=c){
            printf("The largest number is :%lf\t",a);
        }
    }

    else if(b>=a){
        if(b>=c){
            printf("The largest number is :%lf\t",b);
        }
    }

    else{
        printf("The largest number is :%lf\t",c);
    }

    return 0;
}

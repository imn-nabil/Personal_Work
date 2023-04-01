#include<stdio.h>
int main()
{
    float a,b;
    double c,d;

    scanf("%f %f %lf %lf",&a,&b,&c,&d);
//7,8
    printf("A = %0.6f, B = %0.6f\nC = %0.6f, D = %0.6f\n",a,b,c,d);
//9,10
    printf("A = %0.1f, B = %0.1f\nC = %0.1lf, D = %0.1lf\n",a,b,c,d);
//11,12
    printf("A = %0.2f, B = %0.2f\nC = %0.2lf, D = %0.2lf\n",a,b,c,d);
//13,14
    printf("A = %0.3f, B = %0.3f\nC = %0.3lf, D = %0.3lf\n",a,b,c,d);
//15,16 (scientefic format)
    printf("A = %0.3E, B = %0.3E\nC = %0.3E, D = %0.3E\n",a,b,c,d);
//17,18
    printf("A = %0.0f, B = %0.0f\nC = %0.0f, D = %0.0f\n",a,b,c,d);

    return 0;
}
//https://www.delftstack.com/howto/c/scientific-notation-in-c/


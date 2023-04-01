#include<stdio.h>

int main()
{
    int a,i=0;

    initial_point:
        for(a=0;a<=5;a++){
            printf("%d\n",a);
        }

        i++;
        printf("\n");

        if(a==6 && i<6){
            goto initial_point;
        }

    return 0;
}

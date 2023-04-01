#include<stdio.h>

int main()
{
    int num,i,counting;
    printf("Enter a number:\t");
    scanf("%d",&num);

    for(i=0,counting=1;counting<=num;){
        if(num%counting==0){
            i++;
        }
        counting++;
    }

    if(i==2){
        printf("It is a prime number");
    }
    else if(i<2){
        printf("It is nothing");
    }
    else if(i>2){
        printf("It is not a prime number");
    }

    return 0;
}

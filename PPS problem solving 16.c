#include<stdio.h>
int main()
{
    int i,sum=0;

    for(i=0;i<=10;i++){
        if(i%2==0||i==0){continue;}
        sum=sum+i;
    }
    printf("Sum of odd numbers between 0~10 is %d\n",sum);
    return 0;
}

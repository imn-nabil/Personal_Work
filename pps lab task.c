#include<stdio.h>
int main()
{
    int nabil[1000];
    int buff,i,size,sum;

    printf("Enter the size\t");
    scanf("%d",&size);
    printf("\n");

    for(i=0;i<size;i++){
        scanf("%d",&buff);
        nabil[i]=buff;
    }

    for(sum=0,i=0;i<size;i++){
        sum=sum+nabil[i];
    }

    printf("sum is %d",sum);

    return 0;
}

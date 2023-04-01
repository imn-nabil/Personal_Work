#include<stdio.h>
int main()
{
    int jhumur[100];
    int i;
    int size,buff,sum=0;
    printf("Enter the size of arrey\n");
    scanf("%d",&size);

    for(i=0;i<(size-1);i++){
        scanf("%d\n",&buff);
        jhumur[i]=buff;
    }
    for(i=0;i<(size-1);i++){
        sum=sum+jhumur[i];
    }
    printf("sum is %d",sum);
}

#include<stdio.h>
int main()
{
    int usr[10],i,buff,sum=0;

    for(i=0;i<10;++i){
        scanf("%d",&buff);
        sum+=buff;
        usr[i]=buff;
    }
    printf("\n\nThe sum is %d\n",sum);
    printf("The average is %f\n\n\n",(float)sum/10);

    return 0;
}

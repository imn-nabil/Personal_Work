#include<stdio.h>
int main()
{
    int num,i;

    printf("Enter a number:\t");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        printf("%d x %d = %d\n",num,i,num*i);
    }
    //printf("%d",i);
    return 0;
}

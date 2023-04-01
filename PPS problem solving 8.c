#include<stdio.h>
int main()
{
    int i=0,j=10;

    for(i=0,j=10;j>=0&&i<=10;j--,i++){
        printf("%d\t%d\n",i,j);
    }
    return 0;
}


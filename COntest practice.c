#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int small(int a,int b)
{
    if(a<b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int big(int a,int b)
{
    if(a<b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()

{
    int x,y,i,sum=0;

    scanf("%d %d",&x,&y);

    //if(x==y) printf("0\n");

    for(i=small(x,y) +1; i<big(x,y) ; i++)
    {
        if(i%5==2 || i%5==3) printf("%d\n",i);
    }
    printf("%d\n",sum);
    return 0;
}

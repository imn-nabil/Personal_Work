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

int odd(int a)
{
    if(a%2!=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()

{
    int x,y,i,sum=0;

    scanf("%d %d",&x,&y);

    if(x==y) printf("0\n");

    else
    {
        for(i=small(x,y) +1; i<big(x,y) ; ++i)
        {
            if(odd(i)) sum+=i;
            else continue;
        }
        printf("%d\n",sum);
    }
    return 0;
}


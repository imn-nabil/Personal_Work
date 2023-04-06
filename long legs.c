#include<stdio.h>
#include<stdio.h>
#include<stdio.h>

int gcd(int n1,int n2){
    while(n1!=n2)
    {
        if(n1 > n2)
            n1 -= n2;
        else
            n2 -= n1;
    }
    return n1;
}

int main()
{
    int outerL,innerL,t,a,b,x,y,maxL,move=0, m=1;

    scanf("%d",&t);

    for(outerL=0; outerL<t; ++outerL)
    {
            scanf("%d %d",&a,&b);

            maxL=gcd(a,b);
            move=0;
            x=0;
            y=0;
            m=1;

            while(++move)
            {
                if(x==a && y==b) break;
                if(maxL>m) ++m;
                else if(x<a) x+=m;
                else if(x<b) y+=m;
                printf("%d\n",move);
            }

            printf("%d\n",move);
    }
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
static int t;
checkk(int a);
int main()
{
    int cases,a,b,c,d,e;
    while(scanf("%d",&cases)&&cases!=0)
    {
        while(cases--)
        {
            t=0;
            scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

            checkk(a);
            checkk(b);
            checkk(c);
            checkk(d);
            checkk(e);

            if(t==1)
            {
                if(a)printf("A\n");
                if(b)printf("B\n");
                if(c)printf("C\n");
                if(d)printf("D\n");
                if(e)printf("E\n");
            }
            else printf("*\n");
        }
    }
    return 0;
}
int checkk(int a)
{
    if(a<=127){
        t++;
        a=1;}
    else a=0;
}

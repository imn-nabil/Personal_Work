
#include<stdio.h>
int main()
{
    int k, p1, p2, i=1;
    scanf("%d", &k);
    while(k--)
    {

        scanf("%d%d", &p1, &p2);
        if(p1==p2)
            {printf("Case %d: %d\n", i++, p1*4+19);}
        else if(p1<p2)
            {printf("Case %d: %d\n", i++, p2*4+19);}
        else
            {printf("Case %d: %d\n", i++, (p1-p2+p1)*4+19);}
    }
    return 0;
}

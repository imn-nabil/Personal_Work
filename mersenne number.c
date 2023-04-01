/*#include<stdio.h>
#include<stdlib.h>
#include<math.h>



int main()
{
    int container[600];
    for(int i=0; i<=500; i++)
    {
        container[i]=0;
    }
    int tst=0,n=0;
    scanf("%d",&tst);
    if (tst>0 && tst<=pow(10,4))
    {
        for(int j=1; j<=tst; j++)
        {

            scanf("%d",&n);
            if(n>=1 && n<=pow(10,9))
            {
                container[j-1]=n;
            }
            else
                return 0;
        }

    }
    else
        return 0;
    for(int i=0; i<tst; i++)
    {
        for(int k=1; k<=container[i]; k++)
        {
            if((int)(pow(2,container[i])-1)% (int)(pow(2,k)-1)==0)
                printf("%d ",k);
        }
        printf("\n");
    }



    return 0;
}
*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ll long long int
int main()
{
    ll tst,n;
    scanf("%lld",&tst);
    while(tst--)
    {
        scanf("%d",&n);
        for(ll i=1; i<=n; i++)
        {
            if((int)(pow(2,n)-1)%(int)(pow(2,i)-1)==0)
            {
                printf("%lld ",i);
            }
        }
        printf("\n");
    }
    return 0;
}

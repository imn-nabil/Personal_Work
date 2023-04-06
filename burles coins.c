#include<stdio.h>
#include<stdio.h>
#include<stdio.h>

int main()
{
    int outerL,innerL,t,n,k,x,y,remX,remY,flag;

    scanf("%d",&t);

    for(outerL=0; outerL<t; ++outerL)
    {
        //for(innerL=0; innerL<2; ++innerL)
        //{
            scanf("%d %d",&n,&k);
            flag=0;
            for(x=(int)(n/2);x>0/*(k*y)!>*/; --x){
                if((int)(n%x)/k==0){
                    flag=1;
                    break;
                }
            }
            if(flag)printf("YES\n");
            else printf("NO\n");
        //}
    }
    return 0;
}

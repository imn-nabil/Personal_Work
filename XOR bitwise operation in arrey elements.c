#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int t,n,num,i,j,ans=0,XORsumB=0,flag=0;

    scanf("%d",&t);
    for(int q=1;q<=t;++q)
    {
        scanf("%d",&n);
        int a[n],XOR[n];
//arrey input
        flag=0;
        for(j=0; j<n ; ++j)
        {
            scanf("%d",&num);
            a[j]=num;
            /*if(j>0){
                if(a[j]==a[j-1]) flag=1;
            }*/

        }

//selsecting the ans possibility
        for(ans=0; ans<256   ; ++ans)
        {
//accessing all elements in arrey

            for(i=0; i<n   ; ++i)
            {
//doing the operation
                XOR[i]=a[i]^ans;
            }
            XORsumB=XOR[0];
            for(i=1; i<n   ; ++i)
            {
                XORsumB=XORsumB^XOR[i];
            }
//if found, close loop & show ans
            if(XORsumB==0) break;
        }
        if(ans==256) printf("-1\n");
        else printf("%d\n",ans);
    }
    return 0;
}

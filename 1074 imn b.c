#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()

{
    int n;
    long int x;

    scanf("%d",&n);

    for(int i=1; i<=n; ++i)
    {
        scanf("%ld",&x);

        if(x%2==0 && x!=0)
        {
            if(x>0)printf("EVEN POSITIVE\n");
            else printf("EVEN NEGATIVE\n");
        }
        else if(x%2!=0  && x!=0){
            if(x>0)printf("ODD POSITIVE\n");
            else printf("ODD NEGATIVE\n");
        }
        else if(x==0) printf("NULL\n");
    }
    return 0;
}


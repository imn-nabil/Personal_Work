#include<stdio.h>

int main()
{
    int L,C;
    while(scanf("%d %d",&L,&C)!=EOF)
    {

        if(L%2!=0)
        {
            if((L+C)%2==0) printf("1\n");
            else printf("0\n");
        }
        else
        {
            if((L+C)%2!=0) printf("0\n");
            else printf("1\n");
        }
    }
    return 0;
}

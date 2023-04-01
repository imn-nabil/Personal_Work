#include<stdio.h>
#include<string.h>

int main()
{
    int n,x,y;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        if(y==0) printf("divisao impossivel\n");
        else printf("%0.1f\n",(float)x/y);
    }

    return 0;
}


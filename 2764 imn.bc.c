#include<stdio.h>
int main()
{
    int d,m,y,cc;
    scanf("%d%c%d%c%d",&d,&cc,&m,&cc,&y);

    printf("%02d/%02d/%02d\n",m,d,y);
    printf("%02d/%02d/%02d\n",y,m,d);
    printf("%02d-%02d-%02d\n",d,m,y);

    return 0;
}


#include <stdio.h>

int main()
{
    int count=0,num;
    for(int i=1; i<=6; i++)
    {
        scanf("%d",&num);
        if(num>=0)count++;
    }
    printf("%d valores positivos\n",count);

    return 0;
}

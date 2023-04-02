#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void sort(char s[],int n)
{
    int i, j;
    char temp;

    for (i = 0; i <n-1; i++)
    {
        for (j = i + 1; j<n; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
    puts(s);
    printf("\n");
}


int main()
{
    int t,n;
    scanf("%d",&t);
    for(int q=1;q<=t;++q)
    {
        scanf("%d",&n);
        getch();
        char s[n];
        gets(s);
        sort(s,n);
    }
    return 0;
}

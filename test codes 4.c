#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    int n,m,count=0;
//first line input ( number of houses , number of tasks)
    scanf("%d %d",&n, &m);
    int houses[n],tasks[m];
//inputting the task house number
    for(int i=0; i<m; ++i)
        scanf("%d",&tasks[i]);

    for(int t=0; tasks[t]!='\0'; ++t)
    {
        for(int house 1; house<=n ; ++house)
        {
            if( tasks[t]!=house && house==n)
            {
                house=1;
                count++;
            }
        }
    }

    return 0;
}

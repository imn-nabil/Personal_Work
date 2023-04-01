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

//generating the loop
  //    for(int i=0,j=1; i<n && j<=n ; ++i,++j)
  //      houses[i]=j;
//inputting the task house number
    for(int i=0; i<m; ++i)
        scanf("%d",&tasks[i]);
//counting the required time

    for(int task=0;task<m;task++)
    {
        if(tasks[task]==1) continue;
        for(int house=1; house<=n; ++house)
        {
            if(tasks[task]==house && tasks[task]<tasks[task+1] &&tasks[task+1]!='\0')
            {
                task++;
                if(task==m) break;
                continue;
            }
            if(tasks[task]==house && tasks[task]>tasks[task+1] &&tasks[task+1]!='\0')
            {
                count= count+ (n-house+1);
                break;
            }

            if(tasks[task]==house &&tasks[task+1]=='\0')
                break;

            if(tasks[task]==tasks[task+1])
            {
                --house;
                --count;
                break;
            }

            count++;
        }

    }
    printf("%d\n",count);

    return 0;
}






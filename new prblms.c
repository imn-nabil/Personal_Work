#include<stdio.h>
void main()
{
    int n;
    scanf("%d",&n);
    int arr1[n],buff;
    int i,j,count;

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                count++;
                break; //important af

            }
        }
    }
    printf("duplicates %d\n",count);
//deleting the duplicates
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr1[i]==arr1[j])
            {
                for ( int k = j; k < n - 1; k++)
                {
                    arr1[k] = arr1[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        printf("%d  ",arr1[i]);
    }


    return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define ll long long int

int main()
{

//sorting the inputs
    int i, j, buffer, n, stones[30];

        scanf("%d", &n);

        for (i = 0; i < n; ++i)
            scanf("%d", &stones[i]);

        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (stones[i] > stones[j])
                {
                    buffer =  stones[i];
                    stones[i] = stones[j];
                    stones[j] = buffer;
                }
            }
        }




    return 0;
}

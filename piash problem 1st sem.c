#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, M, num;
    int prime[21] = {11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};

    scanf("%d", &N);

    for (int i = 1; i <= N; ++i)
    {
        scanf("%d", &M);
        int decisionimn2 = 0, numbers,temp=0;
        for (int j = 0; j < M; ++j)
        {
            scanf("%d", &num);
            for(int p=0 ;p <= 20;p++)
            {
                if (num == prime[p] && num >= temp)
                {
                    numbers = num;
                    temp = num;
                    decisionimn2++;
                    break;
                }
            }
        }
        if (decisionimn2 > 0)
            printf("%d\nYes, I am going home.\n", numbers);
        else
            printf("Well, I am stuck here.\n");
    }

    return 0;
}

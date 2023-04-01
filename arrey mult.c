#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int ar1[3][4]={ {1,2,3,4},
                    {4,5,6,4},
                    {7,8,9,4}
                  };
    int ar2[4][3]={ {1,2,3},
                    {4,5,6},
                    {7,8,9},
                    {4,5,8}
                  };

    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            printf("%d  ",ar1[i][j]);
        }
        printf("\n");
    }

    return 0;
}

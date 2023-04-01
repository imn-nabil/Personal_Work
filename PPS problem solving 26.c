#include<stdio.h>
int main()
{
    int gap,staar,row,gap_b,staar_b,row_b;

    staar_b=1;
    gap_b=3;
    for(row=1;row<5;row++){
        for(gap=gap_b-1;gap>=0;gap--){
            printf("\t");
        }
        gap_b--;

        for(staar=1;staar<=staar_b;staar++){
            printf("*\t\t");
        }
        staar_b++;
        printf("\n\n");

    }
    return 0;
}


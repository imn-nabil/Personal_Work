#include<stdio.h>
int main()
{
    int r,c;
//line of dashes
    for(r=1;r<=39;r++){
        printf("-");
    }
    printf("\n");
//column of |
    for(int j=0;j<=4;++j){
        for(r=1;r<=39;r++){
            if(r==1||r==39) printf("|");
            else printf(" ");
        }
        printf("\n");
    }
//last row dashes
    for(r=1;r<=39;r++){
        printf("-");
    }

    printf("\n");

    return 0;

}


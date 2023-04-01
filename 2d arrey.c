#include<stdio.h>

void main()
{
    int buff,i,j,a[3][4],b[2][3];
//input
    for(i=0; i<3 ; ++i){
        for(j=0; j<4 ; ++j){

            scanf("%d",&buff);
            a[i][j]=buff;
        }
    }
//output
    for(i=0; i<3 ; ++i){
        printf("\n");
        for(j=0; j<4 ; ++j){
            printf("%d ",a[i][j]);
        }
    }
}

#include<stdio.h>

void star_print(int n){

    int i,j;
    for(i=0;i<=n;i++){
        for(j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int n,i,j;
    printf("Enter a number\t");
    scanf("%d",&n);

    star_print(n);

    return 0;
}

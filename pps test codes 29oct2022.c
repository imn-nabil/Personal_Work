//Take an integer number N as an input then take input from user N times now print the first and last digit.
#include<stdio.h>
int main()
{
    int N,num[N];

    printf("Enter an integer number:\n");
    scanf("%d",&N);
    printf("Enter %d numbers:\n",N);
    for(int i=0;i<N;++i){
        scanf("%d",&num[i]);
    }
    printf("\n\nFirst digit is %d",num[0]);
    printf("\nLast digit is %d\n",num[(N-1)]);

    return 0;
}

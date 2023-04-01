#include<stdio.h>
#include<math.h>

int decTbin(int n){
    int bin=0,rem=0,i=1;
    while(n!=0){
        rem=n%2;
        n/=2;
        bin+=rem*i;
        i*=10;
    }
    return bin;
}

int main()
{
    int x;
    scanf("%d",&x);
    printf("\n%d\n",decTbin(x));
    return 0;
}


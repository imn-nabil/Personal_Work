#include <stdio.h>
#include<string.h>
#include<math.h>

int find_sum(int arra[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arra[i];
    }

    return sum;
}

int main()
{
    int n=5,sum;
    int artcel[]={2,3,5,4,1};

    sum=find_sum(artcel[n],n);
    printf("sum is %d\n",sum);

    return 0;
}

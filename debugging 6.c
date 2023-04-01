#include <stdio.h>
#include<string.h>
#include<math.h>

int find_max(int ara[], int n){
    int max=ara[0];
    for(int i=1;i<n;i++){
        if(ara[i]>max){
            max=ara[i];
        }
    }
    return max;
}

int find_min(int ara[], int n){
    int min=ara[0];
    for(int i=1;i<n;i++){
        if(ara[i]<min){
            min=ara[i];
        }
    }
    return min;
}

int find_sum(int ara[], int n){
    int sum, i;
    for(sum=0,i=0;i<n;i++){
        while(ara[i]){
            sum=sum+ara[i];
        }
    }
    return sum;
}

int find_mi(int ara[], int n){
    int min=ara[0];
    for(int i=1;i<n;i++){
        if(ara[i]<min){
            min=ara[i];
        }
    }
    return min;
}


int main()
{
    int ara[]={8,1,2,22,91};
    int n=5;

    int max=find_max(ara, n);
    printf("%d\n",max);

    int min=find_min(ara, n);
    printf("%d\n",min);

    int sum=find_sum(ara, n);
    printf("%d\n",sum);

    return 0;
}

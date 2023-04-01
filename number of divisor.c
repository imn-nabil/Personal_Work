#include<stdio.h>
#include<math.h>

int n_o_divis(int a)
{
    int i,count=0;

    for(i=1;i<=a;++i){
        if(a%i==0) count++;
        else continue;
    }
    return count;
}

int main()
{
    int x;
    printf("%d\n",n_o_divis(38115));
}


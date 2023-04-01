#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int a,b,n,t,buff,count;
//inputting the numer of test casees
    scanf("%d",&t);

    for(int i=0;i<t;++i){
//inputting the cases
        scanf("%d",&n);
//the calculation
        count=0;
        for(int num=0; num<n; ++num){
            a=num;
            b=n-a;

            if(a>b && a+b==n && a>=0 && b>=0){
                count++;
            }
            else {continue;}
        }
        printf("%d\n",count);
    }

    return 0;
}


#include<stdio.h>
#include<math.h>
//number of devisor
int n_o_divis(int a)
{
    int i,count=0;

    for(i=1;i<=a;++i){
        if(a%i==0) count++;
        else continue;
    }
    return count;
}

// attack power of a troop is equal to the
//number of divisors of health point of that troop.

int main()
{
    int T,N,max=0,buff;

//taking number of test cases
    scanf("%d",&T);
    //int test[T];

//inputting the test cases
    for(int i=0;i<T;++i){

//taking the number of troops
        scanf("%d",&N);
        int health=0;
//health of the troops
        for(int j=0;j<N;++j){
            scanf("%d",&health);
    ///////
            buff=n_o_divis(health);
            if(buff>max) max=buff;
    ///////
        }
        printf("Case %d: %0.4f\n",i+1,max*1.0);
        max=0;
    }
    return 0;
}

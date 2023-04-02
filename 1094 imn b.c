#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    int N,amount,type,rabbit=0,rat=0,frog=0,total=0;
    scanf("%d",&N);

    for(int i=1;i<=N;++i)
    {
        scanf("%d %c",&amount,&type);
        switch(type){
            case 'C':
                rabbit+=amount;
                break;
            case 'R':
                rat+=amount;
                break;
            case 'S':
                frog+=amount;
                break;
        }
    }
    total=rabbit+rat+frog;

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %0.2f %%\n",(float)rabbit/total*100);
    printf("Percentual de ratos: %0.2f %%\n",(float)rat/total*100);
    printf("Percentual de sapos: %0.2f %%\n",(float)frog/total*100);

    return 0;
}

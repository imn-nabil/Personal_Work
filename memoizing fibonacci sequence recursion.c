#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

typedef long long int ll;
ll term[100000000];
ll fib(int a)
{
    if(a<=2) return 1;
    if(term[a]) return term[a];
    term[a] = fib(a-1) + fib(a-2);

    return term[a];
}

int main()
{
    printf("%lld\n",fib(1000));

    return 0;
}


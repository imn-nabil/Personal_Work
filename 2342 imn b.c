#include<stdio.h>
#include<string.h>

int main()
{
    int n,p,q;
    char c;

    scanf("%d %d %c %d",&n,&p,&c,&q);

    switch (c){
    case '+':
        if((p+q)<=n) printf("OK\n");
        else printf("OVERFLOW\n");
        break;
    case '*':
        if((p*q)<=n) printf("OK\n");
        else printf("OVERFLOW\n");
        break;
    }
    return 0;
}

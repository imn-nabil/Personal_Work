#include <stdio.h>

int main()
{

    int a,b,c,d,h,m;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    if(a==b && b==c && c==d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if((c>a || a==c) && (b<d || b==d))
    {
        h=c-a;
        m=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);
    }
    else if(c>a && b>d )
    {
        d=d+60;
        a=a+1;
        h=c-a;
        m=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else if( c<a && b>d )
    {
        d=d+60;
        a=a+1;
        c=c+24;
        h=c-a;
        m=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    else if((c<a || c==a) && (b<d || b==d) )
    {
        c=c+24;
        h=c-a;
        m=d-b;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    }
    return 0;
}

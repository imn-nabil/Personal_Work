#include <stdio.h>
#include <math.h>

int main()
{
    int n,h,c,l;
    double len;

    while(scanf("%d",&n)!=EOF)
    {
        scanf("%d %d %d",&h,&c,&l);

        len=(sqrt(h*h+c*c))*n/10000;
        printf("%0.4f\n",(float)len*l);

    }
    return 0;
}

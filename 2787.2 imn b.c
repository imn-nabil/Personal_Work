#include<stdio.h>
#include<math.h>

int main()
{
    int l,c;
    scanf("%d %d",&l, &c);
//odd l
    if(l%2){
        if(c%2)printf("1\n");
        else printf("0\n");
    }
    if(!(l%2)){
        if(!(c%2))printf("1\n");
        else printf("0\n");
    }

    return 0;
}

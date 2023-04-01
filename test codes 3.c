#include<stdio.h>

int main()
{
int a,over=0,boll=0,nboll;
scanf("%d",&nboll);
a=300-nboll;









if(a>=6)
{
   over=a/6;
   boll= a-over*6;
   a=a%6;

}
    else {

        boll=a;
    }
printf("%d %d",over,boll);
    return 0;
}

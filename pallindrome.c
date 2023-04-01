#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    char s1[1000],s2[1000];
    scanf("%s",&s1);

    strcpy(s2,s1);
    strrev(s2);
    strupr(s1);
    strupr(s2);

    if(!strcmp(s2,s1)) printf("Pallindome mother fucker");
    else printf("not pallindrome");

    return 0;
}

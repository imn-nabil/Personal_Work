#include <stdio.h>
#include <string.h>

int main()
{
    int pos,t,n;

        scanf("%d",&n);
        char MainNum[n],Num1[n],Num2[n],d[1];

        gets(d);

        gets(MainNum);



//finding the postiono f the digit less than ....
        for(pos=0; pos<(int)strlen(MainNum) ; ++pos)
            if(MainNum[pos]==d[0]) break;
        //printf("%d\n",pos);

//first portion
        for(int i=0; i<pos ; ++i)
            Num1[i]=MainNum[i];

        //puts(Num1);

//last portion
        for(int i=pos; i<(int)strlen(MainNum) ; ++i)
            Num2[i-pos]=MainNum[i];

        //puts(Num2);

        strcat(Num1,d);
        //puts(Num1);
        strcat(Num1,Num2);
        puts(Num1);

    return 0;
}

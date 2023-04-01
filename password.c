#include<stdio.h>
#include<string.h>
int main()
{
    char pass[1000];

    while(1){
        getch(pass);
        for(int i=0 ; i!='\0' ; ++i){
            scanf("%s",&pass);
            printf("*");
        }
        if(pass=='bainchod'){printf("Correct\n");break;}
        else continue;
    }
    return 0;
}

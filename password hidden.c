#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
    char pw[5],safe[]="balda";
    int x;
    while(1)
    {
        printf("Enter password: ");
        for (x = 0; x<5 ; x++)
        {
            pw[x] = getch();
            printf("*");
        }
        pw[x] = '\0';
        if(!strcmp(pw,safe))
        {
            printf("\nCorrect\n\n");
            break;
        }
        else printf("\nIncorrect\n\n");
    }

}

#include <stdio.h>
int main()
{
    int i,j;
    char alp='A';
    for(i=1;i<=4;i++){
         for(j=1; j<=i ;j++){
             printf ("%c\t",alp);
             alp++;
         }
         printf("\n");
    }
     return 0;
}

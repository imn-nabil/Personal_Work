#include <stdio.h>
static int i=1;
int x;

void namota(int a){
    if(i<=10){
        printf("%d x %d = %d\n",a,i,a*i);
        i++;
    }
    else {return;}
    namota(a);
}
int main() {
    printf("Enter 1 numbers: ");
    scanf("%d",&x);

    namota(x);

    return 0;
}



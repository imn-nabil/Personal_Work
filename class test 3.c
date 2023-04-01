#include <stdio.h>
//static int i=1;

void namota(int a,int b,int i){
    if(i<=b){
        printf("%d x %d = %d\n",a,i,a*i);
    }
    else {return;}
    namota(a,b,i+1);
//ekhane increament USE KORA JABE NA
}
int main() {
    int x,y;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&x,&y);

    namota(x,y,1);

    return 0;
}



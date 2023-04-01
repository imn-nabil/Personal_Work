#include<stdio.h>

int main()
{
    int i,j,num,remainder,binary_[1000];
    printf("Enter a decimal number:\t");
    scanf("%d",&num);

    for(i=0;num>0;i++){
        binary_[i]= num%2;
        num=num/2;
    }
    for(j=i-1; j>=0 ; j--){
        printf("%d",binary_[j]);
    }

    return 0;
}

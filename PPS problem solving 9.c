#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:\t");
    scanf("%d",&year);

    if(year%4==0){
        printf("The year is leap year");
    }
    else{
        printf("The year is not a leap year");
    }
    return 0;
}

//print number from 1 to 10 in ascending and discending order

/*#include<stdio.h>

void main()
{
    int i=1;

    for(;i<=10;i++){
        printf("%d,",i);
    }
    printf("\n");
    for(i=10;i>0;i--){
        printf("%d,",i);
    }
}

*/

//take N inputs from user and prints their sum and average
/*#include<stdio.h>

void main()
{
    int n,a,sum=0;
    float avg=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a);
        sum+=a;
    }
    avg=(float)sum/n;
    printf("Sum %d & Average %f\n",sum,avg);
}
*/

//Take N input from user and print how many are even & odd
/*#include<stdio.h>

void main()
{
    int n,in,evn=0,odd=0;

    printf("How many numbers want ot insert: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&in);
        if(in%2==0) evn++;
        else odd++;
    }
    printf("%d Even numbers & %d Odd numbers\n",evn,odd);
}
*/

/*
//Take three inputs firstNumber,secondNumber,thirdNumber
//from user and print which number is the maximum
#include<stdio.h>

void main()
{
    int firstNumber,secondNumber,thirdNumber;
    scanf("%d %d %d",&firstNumber,&secondNumber,&thirdNumber);

    if(firstNumber>secondNumber && firstNumber>thirdNumber) printf("First number is the maximum number.\n");
    else if(secondNumber>firstNumber && secondNumber>thirdNumber) printf("Second number is the maximum number.\n");
    else if(thirdNumber>secondNumber && thirdNumber>firstNumber) printf("Third number is the maximum number.\n");
}
*/

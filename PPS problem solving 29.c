
#include<stdio.h>
#include<math.h>

int main()
{
    int num1;
    printf("Enter a number\t");
    scanf("%d",&num1);

    switch(num1)
    {
        case 1:
            printf("Multiplied by 100 is %d",num1*100);
            break;

        case 5:
            printf("Multiplied by 10 is %d",num1*10);
            break;

        case 10:
            printf("Multiplied by 20 is %d",num1*20);
            break;

        default:
            printf("Enter a number between 1,5,10");
    }

    return 0;
}

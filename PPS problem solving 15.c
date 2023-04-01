#include<stdio.h>
#include<math.h>

pi=3.1416;

int main()
{
    int inpt;
    printf("Enter a number from the list bellow:\n11\n22\n33\n44\n\n");
    scanf("%d",&inpt);

    switch(inpt)
    {
        case 11:
            printf("Area of a circle with radius 11 is :\t%lf\n",(double)pi*11*11);
            break;

        case 22:
            printf("Area of a rectangle with side 11 & 22 is: is %d\n",11*22);
            break;

        case 33:
            printf("Area of a square with side 33 is %d\n",33*33);
            break;

        case 44:
            printf("Area of a same sided triangle is %lf\n",sqrt(3)/4*44*44);
            break;
        default:
            printf("Enter a number from the list mentioned above.\n");
    }

    return 0;
}

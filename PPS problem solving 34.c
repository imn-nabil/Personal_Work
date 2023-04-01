#include<stdio.h>
double vlm(double height, double width){
    double volume=height*width;
    return volume;
}
int main()
{
    double height, width;

    printf("Enter the hight in meters=\t");
    scanf("%lf",&height);

    printf("Enter the hight in meters=\t");
    scanf("%lf",&width);

    printf("%lf",vlm(height,width));

    return 0;
}

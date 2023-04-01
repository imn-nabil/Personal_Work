#include<stdio.h>

double pi=3.14159;

double are_circle(double radius){
    double area=radius*radius*pi;
    return area;
}

double are_rect(double length, double width){
    double area=length*width;
    return area;
}

int main()
{
    double length, width, radius;

    printf("Enter the height in meters=\t");
    scanf("%lf",&length);

    printf("Enter the width in meters=\t");
    scanf("%lf",&width);

    printf("Enter the radius of circle in meters=\t");
    scanf("%lf",&radius);

    printf("Area of rectangle is  %lf square meter.",are_rect(length,width));
    printf("Area of circle is  %lf square meter.",are_circle(radius));

    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("%-12s%-12d%-12d\n", "a", 2989, 9283019);
    printf("%-12s%-12d%-12d\n", "helloworld", 0, 1828274198);

    printf("%12s%12d%12d\n", "a", 2989, 9283019);
    printf("%12s%12d%12d\n", "helloworld", 0, 1828274198);

    printf("A = %0.1f, B = %0.1f\n",a,b);
    printf("C = %0.1lf, D = %0.1lf\n",c,d);

    printf("\"Ro\'b\'er\tto\\/\n");
    printf("(\"_\") (\'.\')\n");

    exit(0);
}

//https://stackoverflow.com/questions/14420924/aligning-output-values-in-c

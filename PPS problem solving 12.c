#include<stdio.h>
int main()
{
    float s1,s2,s3,s4,s5;

    printf("Enter a number for subject 1 \t");
    scanf("%f",&s1);

    printf("Enter a number for subject 2 \t");
    scanf("%f",&s2);

    printf("Enter a number for subject 3 \t");
    scanf("%f",&s3);

    printf("Enter a number for subject 4 \t");
    scanf("%f",&s4);

    printf("Enter a number for subject 5 \t");
    scanf("%f",&s5);

    double total=(s1+s2+s3+s4+s5);
    double perc=((total/500)*100);
    printf("Total mark is %0.2f out of 500\n",total);
    printf("Percentage is %0.2f\n",perc);

    if(perc>80){
        printf("Grade is 'A+'.\n");
    }
    else if(perc>=65&&perc<=80){
        printf("Grade is 'A'.\n");
    }
    else if(perc>=50&&perc<=65){
        printf("Grade is 'B'.\n");
    }
    else if(perc>=42&&perc<=50){
        printf("Grade is 'C'.\n");
    }
    else if(perc<42){
        printf("Failed.\n");
    }

    return 0;
}

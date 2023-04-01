#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student_dbase{
    char name[50];
    int id;
    char sec;
};

int main()
{
    int size;
    printf("Enter the number of students: ");
    scanf("%d",&size);

    struct student_dbase student[size];

    printf("\n\n");
//inputting the values
    for(int i=0 ; i<size ; i++){
        printf("\nEnter Student %d's info:\n",i+1);

        printf("Name: ");
        scanf("%s",student[i].name);

        printf("ID: ");
        scanf("%d",&student[i].id);

        printf("Section: ");
        scanf("%c",&student[i].sec);
    }
    printf("\n\n\n");

//printing the values
    for(int i=0 ; i<size ; i++){
        printf("Student %d's info:\n",i+1);

        printf("Name: %s\n",student[i].name);
        printf("ID: %d\n",student[i].id);
        printf("Section: %c\n",student[i].sec);
    }

    //getchar();
    return 0;
}

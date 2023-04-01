#include<stdio.h>
#include<string.h>

struct record{
    char name[100];
    int id;
    float cg;
};

void main()
{
    int n;

    printf("Enter student number:  ");
    scanf("%d",&n);

    struct record rec[n];

    for(int i=0;i<n;i++){
        scanf("%s",rec[i].name);
        scanf("%d %f",&rec[i].id,&rec[i].cg);
    }
    printf("\n");

    for(int i=0;i<n;i++){
        printf("\n%s\t%d\t%0.2f",rec[i].name,rec[i].id,rec[i].cg);
    }
}


//161432

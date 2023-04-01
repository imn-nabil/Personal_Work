#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*Ekta structure use kore 10 jon student er
name, Id, department, batch, section, phone no , address, CGPA
input nibe and output display korbe array and loop use kore.
Variable er name er seshe Tomar I'd r 4 digit add korbe always.*/

struct info{
    int id;
    char name[50];
    char dept[10];
    int batch;
    char sec;
    char phone[15];
    char adrs[100];
    float cg;
};

int main()
{
    int how_many;

    printf("Enter the number of students: ");
    scanf("%d",&how_many);

    struct info student[how_many];
//input
    for(int i=0; i<how_many; i++){

        printf("\nEnter student %d's info bellow:\n",i+1);
//id
        printf("id: ");
        scanf("%d",&student[i].id);

/*previous scanf er input e jodi dei suppose 65
tahole actually input hobe 65\n  . ekhane 65 tuku
uporer scanf function ta input nibe, input buffer
er moddhe \n theke jabe, eita nicher scanf chalu howar
sathe sathei input hye jabe function a,tai ota okahnei
terminate hye jabe, r kisu input nite pare na.

tar jonno nihcer scanf er age akta  getchar() die oi \n
ke tene ber kore anlam input buffer theke. akhn getchar()
er kaj shesh, input buffer o khali, easily nicher scanf cholbe*/

//name
        getchar();
        printf("Name: ");
        gets(student[i].name);
//dept
        //getchar();
        printf("Department: ");
        gets(student[i].dept);
//batch
        printf("Batch: ");
        scanf("%d",&student[i].batch);
//sec
        getchar();
        printf("Section: ");
        student[i].sec=getchar();
//phone no
        getchar();
        printf("Mobile no: ");
        gets(student[i].phone);
//address
        //getchar();
        printf("Address: ");
        gets(student[i].adrs);
//cg
        printf("CGPA: ");
        scanf("%f",&student[i].cg);
    }
//output
    //printf("\n\n\nID    NAME         CGPA\n");
    for(int i=0; i<how_many; i++){

        printf("%d     ",student[i].id);
        printf("%s     ",student[i].name);
        printf("%s     ",student[i].dept);
        printf("%d     ",student[i].batch);
        printf("%c     ",student[i].sec);
        printf("%s     ",student[i].phone);
        printf("%s     ",student[i].adrs);
        printf("%f\n",student[i].cg);
    }
    return 0;
}

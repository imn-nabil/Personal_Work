#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void createlist();
int SearchData(int key);

static int FoundInfo;

struct node{
    int id;
    float cg;
    struct node *next;
} *head;


int main()
{
    int find,foundout;

    createlist();



    return 0;
}

void createlist()
{
    int id_in;
    float cg_in;
    struct node *current_node,*next_node;

    head=(struct node*)malloc(sizeof(struct node));

    printf("Start entering the values below:\n enter (ctrl+z) to finish data entry.\n\n");

    printf("ID: ");
    scanf("%d",&id_in);

    printf("CGPA: ");
    scanf("%f",&cg_in);

    head->id=id_in;
    head->cg=cg_in;
    head->next=NULL;

    current_node=head;

    printf("\nID: ");
    while(scanf("%d",&id_in)!=EOF){
        next_node=(struct node*)malloc(sizeof(struct node));

        printf("CGPA: ");
        scanf("%f",&cg_in);

        next_node->id=id_in;
        next_node->cg=cg_in;
        next_node->next = NULL;

        current_node->next=next_node;
        current_node=next_node;

        printf("\nID: ");
    }
    printf("\n\n----Data entry done!----\n\n");
}

/*
int SearchData(int key)
{
    struct node* current;
    current=head;
    FoundInfo=0;

    while(current!=NULL)
    {
        if(key==current->id)
            FoundInfo=current->id;

        current=current->next;
      }
    return FoundInfo;
}
*/


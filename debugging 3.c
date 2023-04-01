#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int aaa;
static float bbb;

struct node{
    int id;
    float cg;
    struct node *next;
} *head;

void showing_list()
{
    struct node *current_node;
    current_node=head;
    printf("\n\n---OUTPUT---\n");

    while(current_node != NULL){
        printf("ID: %d\n",current_node->id);
        printf("CGPA: %0.2f\n\n",current_node->cg);
        current_node=current_node->next;
    }
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


void single_element(int aaa,float bbb)
{
    printf("Enter the  value you want to add:\nID: ");
    scanf("%d",&aaa);
    printf("CGPA: ");
    scanf("%f",&bbb);
    getchar();
}

void insert_last()
{
    struct node* newnode, *current_node;
    newnode=(struct node*)malloc(sizeof(struct node));
    current_node=head;

    single_element(newnode->id,newnode->cg);

    while(current_node->next!=NULL)
    {
        current_node=current_node->next;
    }
    current_node->next=newnode;
    newnode->next=NULL;
}

int main(){

    createlist();
    printf("Enter the last 2 values for last node\n");
    insert_last();
    showing_list();

    return 0;
}

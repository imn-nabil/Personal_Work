#include<stdio.h>
#include<stdlib.h>

void data_entry();
void data_showing();
void list_length();

struct node{
    int id;
    float cg;
    struct node *next;
} *head, *current_node, *new_node;

int main()
{
    data_entry();
    data_showing();

    getchar();

    return 0;
}

void data_entry(){

    int id_in;
    float cg_in;

    head=(struct node*)malloc(sizeof(struct node));

    printf("keep typing in data and press enter.\nTo stop the list at any point, press \"ctrl+z\"");
    printf("\n\n\aEnter ID: ");
    scanf("%d",&id_in);
    printf("\aEnter CGPA: ");
    scanf("%f",&cg_in);

//1st node input
    head->id=id_in;
    head->cg=cg_in;
    head->next=NULL;

//setting current one
    current_node=head;

    printf("\n\n\aEnter next ID: ");
    while(scanf("%d",&id_in)!=EOF ){

//making next node(with null)
        new_node=(struct node*)malloc(sizeof(struct node));

//data_entry next node
        printf("\aEnter next CGPA: ");
        scanf("%f",&cg_in);

        new_node->id=id_in;
        new_node->cg=cg_in;
        new_node->next=NULL;

        printf("\n\n\aEnter next ID: ");

//connecting with the previous node which is right behind this one
        current_node->next=new_node;

//shifting all the nodes left side in this wireframe
        current_node=new_node;
    }
}

void data_showing(){

    int i=1;

    printf("\n\n\n\n\a\t----OUTPUT----\n\n\n");

//setting the current position to the starting node
    current_node=head;

    while(current_node!=NULL){
        printf("ID number %d= %d\n",i,current_node->id);
        printf("CGPA number %d= %0.2f\n\n",i,current_node->cg);
        current_node=current_node->next;
    }
}

void list_length(){

    printf("\n\nThe given list length is:  ");

//setting the current position to the starting node
    current_node=head;
    int count=0;

    while(current_node!=NULL){
        count++;
        current_node=current_node->next;
    }
    printf("%d\n",count);
}

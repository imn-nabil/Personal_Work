#include <stdio.h>
#include <stdlib.h>

void createlist();
void display();
void delete_beginning();
void delete_mid(int a);
void delete_last();

struct node{
    int data;
    struct node *next;//jei type er value ke pont kobre shei type er pointer create hoy automatically
}*head,*new_node,*current_node;

//struct node *head;

int main()
{
    int size,pos;
    printf("Enter how many nodes you want in this list:");
    scanf("%d",&size);

    createlist(size);

    printf("which one to delete?  ");
    scanf("%d",&pos);
    //delete_beginning();
    // delete_last();
    delete_mid(pos);

    display();
    return 0;
}

void createlist(int size){

    int number,i;
    head=(struct node*)malloc(sizeof(struct node));

    printf("Enter Value of first node: ");
    scanf("%d",&number);

    head->data= number;
    head->next= NULL;

    current_node=head;

    for(i=2; i<=size; i++){

        new_node=(struct node*)malloc(sizeof(struct node));

        printf("Enter Value of next node: ");
        scanf("%d",&number);

        new_node->data= number;
        new_node->next= NULL;

        current_node->next= new_node;
        current_node=new_node;
    }
}

void display(){
    current_node=head;
    printf("Output:\n");

    while(current_node!=NULL){
        printf("%d\n",current_node->data);
        current_node=current_node->next;
    }
}

void delete_last()
{
    struct node* current_node, *previous_node;

    current_node=head;
    while(current_node->next!=NULL){
        previous_node=current_node;
        current_node=current_node->next;
    }
    free(current_node);
    previous_node->next=NULL;
}
void delete_mid(int  pos)
{
    struct node *current_node, *previous;

    current_node=head;

    for(int i=1;i<pos;i++){
        previous=current_node;
        current_node=current_node->next;
    }
    previous->next=current_node->next;
    free(current_node);
}

void delete_beginning()
{
    struct node *current_node;

    current_node=head->next;
    free(head);
    head=current_node;

    /*
    current_node=head;
    head=head->next;
    free9current_node);
    */
}

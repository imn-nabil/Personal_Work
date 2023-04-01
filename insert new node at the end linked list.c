#include<stdio.h>
#include<stdlib.h>

void data_entry();
void data_showing();
void list_length();

struct node{
    int data;
    struct node *next;
} *head, *current_node, *new_node;

int main()
{
    int size;

    printf("How many numbers: ");
    scanf("%d",&size);

    data_entry(size);
    data_showing();
    list_length();

    getch();

    return 0;
}

void data_entry(int size){

    int inpt;
    head=(struct node*)malloc(sizeof(struct node));

    printf("\n\nEnter 1st number: ");
    scanf("%d",&inpt);
//1st node input
    head->data=inpt;
    head->next=NULL;
//setting current one
    current_node=head;

    for(int i=2; i<=size; i++){

//making next node(with null)
        new_node=(struct node*)malloc(sizeof(struct node));
//data_entrye next node
        printf("Enter next number: ");
        scanf("%d",&inpt);
        new_node->data=inpt;
        new_node->next=NULL;
//connecting with the previous node which is right behind this one
        current_node->next=new_node;
//shifting all the nodes left side in this wireframe
        current_node=new_node;
    }
}

void data_showing(){

    printf("\n\nOutput:\n");
//setting the current position to the starting node
    current_node=head;

    while(current_node!=NULL){
        printf("%d\n",current_node->data);
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

#include <stdio.h>
#include <stdlib.h>

void createlist();
struct node{
    int data;
    struct node *next;//jei type er value ke pont kobre shei type er pointer create hoy automatically
}*head,*new_node,*current_node;

//struct node *head;

int main()
{
    int size;
    printf("Enter how many nodes you want in this list:");
    scanf("%d",&size);

    createlist(size);
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


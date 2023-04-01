#include<stdio.h>
#include<stdlib.h>

void inputttt();
void outputttt();

struct node{
    int data;
    struct node *next;
} *head, *current_node, *new_node;

int main()
{
    int size;
    printf("Enter the size: ");
    scanf("%d",&size);

    inputttt(size);
    outputttt();

    return 0;
}

void inputttt(int size){

    int number;
    //type cast korte gele eg:   (int *) a;  same vabe (struct node*)a;
    head=(struct node*)malloc(sizeof(struct node));

    printf("Enter the 1st number: ");
    scanf("%d",&number);

    head->data=number;
    head->next=NULL;
    current_node=head;

    for(int i=2; i<=size; i++){

        new_node=(struct node*)malloc(sizeof(struct node));

        printf("Enter the next number: ");
        scanf("%d",&number);

        new_node->data=number;
        new_node->next=NULL;

        current_node->next=new_node;
        current_node=new_node;
    }
}

void outputttt(){
    current_node=head;
    printf("Output:\n");

    while(current_node!=NULL){
        printf("%d\n",current_node->data);
        current_node=current_node->next;
    }
}

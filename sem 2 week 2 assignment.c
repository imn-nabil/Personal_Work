#include<stdio.h>
#include<stdlib.h>

//to terminate the input, press   ctrl+z   and hit enter

void display();
void data_entry();

struct node{
    int data;
    struct node* next;
} *head,*currentn, *newn;

int main()
{
    data_entry();
    display();

    return 0;
}

void data_entry(){
    int inpt;

    head=(struct node*)malloc(sizeof(struct node));

    printf("Enter 1st data:");
    scanf("%d",&inpt);

    head->data=inpt;
    head->next=NULL;

    currentn=head;
    printf("Enter next data:");
    while(scanf("%d",&inpt)!=EOF){
        newn=(struct node*)malloc(sizeof(struct node));

        newn->data=inpt;
        newn->next=NULL;

        currentn->next=newn;
        currentn=newn;

        printf("Enter next data:");
    }
}

void display(){
    currentn=head;
    printf("\n\nThe data is:\n");

    while(currentn!=NULL){
        printf("%d\n",currentn->data);
        currentn=currentn->next;
    }
}

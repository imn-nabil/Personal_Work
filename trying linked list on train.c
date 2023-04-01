#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void taking_list();
void show_list();

struct node{
    int data1;
    struct node *next;
} *head, *currentn, *nextn;

int main()
{
    taking_list();
    show_list();

    getchar();

    return 0;
}

void taking_list()
{
    head = (struct node*)malloc(sizeof(struct node));

    int dat;

    printf("Enter 1st data: ");
    scanf("%d",&dat);

    head->data1=dat;
    head->next=NULL;

    currentn=head;
    printf("Enter next data: ");



    while(scanf("%d",&dat)!=EOF){
        nextn = (struct node*)malloc(sizeof(struct node));

        nextn->data1=dat;
        nextn->next=NULL;
//connecting and shifting these 2 nodes
        currentn->next=nextn;
        currentn=nextn;

        printf("Enter next data: ");
    }
}

void show_list(){
    currentn=head;

    printf("\n\n\n    OUTPUT     \n\n");

    while(currentn!=NULL){
        printf("%d\n",currentn->data1);
        currentn=currentn->next;
    }
}

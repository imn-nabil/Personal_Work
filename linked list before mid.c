#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void createlist(int a);
void show_list();
void count_list();
struct node{
    int id;
    //float cg;
    struct node* next;
} *head;

int main(){
    int size,find;

    printf("Enter the number of items you want to insert:  ");
    scanf("%d",&size);

    createlist(size);
    show_list();
    count_list();

    printf("\n\nEnter the you want to find:  ");
    scanf("%d",&find);

    list_find(find);

    return 0;
}

void createlist(int a)
{
    int shawa;

    struct node* currentnode, *nextnode;

    head=(struct node *)malloc(sizeof(struct node));

    printf("Start inseting the values\n");
    printf("ID:  ");
    scanf("%d",&shawa);

    head->id=shawa;
    head->next=NULL;

    currentnode=head;

    for(int i=1; i<a; i++)
    {
        nextnode=(struct node *)malloc(sizeof(struct node));

        printf("ID:  ");
        scanf("%d",&shawa);

        nextnode->id=shawa;
        nextnode->next=NULL;

        currentnode->next=nextnode;
        currentnode=nextnode;
    }
}

void show_list()
{
    struct node* currentnode;
    currentnode=head;
    printf("\n\nOutput shuru\n");

    while(currentnode!=NULL)
    {
        printf("ID: %d\n",currentnode->id);
        currentnode=currentnode->next;
    }

}

void count_list()
{
    int count=0;
    struct node* currentnode;
    currentnode=head;

    while(currentnode!=NULL)
    {
        count++;
        currentnode=currentnode->next;
    }
    printf("Total number of element is :  %d\n",count);
    return count;
}

void list_find(int a)
{
    struct node* currentnode;
    int flag=0;

    currentnode=head;

    while(currentnode!=NULL)
    {
        if(currentnode->id==a){
            printf("\nFound\n\n");
            flag=1;
            break;
        }
        currentnode=currentnode->next;
    }
    if(flag==0) printf("\nNot found\n\n");
}

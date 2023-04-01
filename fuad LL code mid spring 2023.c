#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
    char d;
    float cg;
    struct node *e;
    struct node *f;
} *head;

typedef struct node NODE;

int main()
{
    NODE* newnode;

    newnode=(NODE*)malloc(sizeof(struct node));

    head->d='D';
    head->e=newnode;
    head->f=newnode;
    newnode->f=NULL;

    return 0;
}

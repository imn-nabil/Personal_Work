#include<stdio.h>
#include<stdlib.h>
#include<string.h>

static int FoundInfo;

void createlist();
void showing_list();
int SearchData(int key);
void count_list();
void delete_beginning();
void delete_mid(int a);
void delete_last();
void insert_beginning();
void insert_last();
void insert_mid();
void showhelp();
void show_invalid();
void gap();
void single_element(int *a, float *b);

struct node{
    int id;
    float cg;
    struct node *next;
} *head;

int main()
{
    char inpt[20],rmv[20],add[20];

    printf("STUDENT MANAGEMENT SYSTEM\n__________________________\n\n\n\n");

    printf("Type #HELP for list of actions\n\n");

    while(1){

back_point:
        printf("Type in command: ");
        gets(inpt);

        if(!strcmp(inpt,"#HELP") || !strcmp(inpt,"#help")){
            gap();

            printf("_______________________________________________________________\n");
            printf("#ENTER   -> To create a new  list.\n");
            printf("#SHOW    -> To show the list made previously.\n");
            printf("#SEARCH  -> To look for a specific entry in that list.\n");
            printf("#COUNT   -> To count the set/number of elements in that list.\n");
            printf("#INSERT  -> To add new items in the list.\n");
            printf("#REMOVE  -> To remove an item from  the list.\n");
            printf("#EXIT    -> To close the programme.\n");
            printf("#HELP    -> To see the list of commands.\n");
            printf("_______________________________________________________________\n\n");
        }
        else if(!strcmp(inpt,"#EXIT") || !strcmp(inpt,"#exit"))
        {
            printf("\nProgramme closed successfully\n");
            getchar();
            exit(0);
        }
        else if(!strcmp(inpt,"#ENTER")  || !strcmp(inpt,"#enter"))
        {
            gap();
            createlist();
            showhelp();
        }
        else if(!strcmp(inpt,"#SHOW") || !strcmp(inpt,"#show"))
        {
            gap();
            showing_list();
            showhelp();
        }
        else if(!strcmp(inpt,"#COUNT") || !strcmp(inpt,"#count"))
        {
            gap();
            count_list();
            showhelp();
        }
        else if(!strcmp(inpt,"#SEARCH") || !strcmp(inpt,"#search"))
        {
            gap();

            int find,foundout=0;

            printf("Which data do you want to find?:  ");
            scanf("%d",&find);
            getchar();
            foundout=SearchData(find);

            if(foundout)printf("\n\n     Found\n\n");
            if(!foundout)printf("      Not Found\n\n");

            showhelp();
        }

        else if(!strcmp(inpt,"#INSERT") || !strcmp(inpt,"#insert"))
        {
            gap();
insrt_point:
            printf("type  #BACK  to cancel insertion. #EXIT  to close the programme.\n\nWhich position would you like to delete?\n\n#BEGINNING\n#LAST\n#OTHER\n\ntype in command: ");

            gets(add);

            if(!strcmp(add,"#BACK") || !strcmp(add,"#back"))
            {
                gap();
                printf("cancelled inserting new list elemetns!\n");
                showhelp();
                goto back_point;
            }
            else if(!strcmp(add,"#EXIT") || !strcmp(add,"#exit"))
            {
                printf("\nProgramme closed successfully\n");
                getchar();
                exit(0);
            }
            else if(!strcmp(add,"#BEGINNING") || !strcmp(add,"#beginning"))
            {
                gap();
                insert_beginning();
                printf("\n1st element inserted successfully!\n\n");
                showhelp();
            }
            else if(!strcmp(add,"#OTHER") || !strcmp(add,"#other"))
            {
                gap();
                insert_mid();
                showhelp();
            }
            else if(!strcmp(add,"#LAST") || !strcmp(add,"#last"))
            {
                gap();
                insert_last();
                printf("\nLast element added successfully!\n\n");
                showhelp();
            }
            else{
                show_invalid();
                goto insrt_point;
            }
        }
        else if(!strcmp(inpt,"#REMOVE") || !strcmp(inpt,"#remove"))
        {
            gap();
remv_point:
            printf("type  #BACK  to cancel deletion. #EXIT to close the programme.\n\nWhich position would you like to delete?\n\n#BEGINNING\n#LAST\n#OTHER\n\ntype in command: ");

            gets(rmv);
            if(!strcmp(rmv,"#BACK") || !strcmp(rmv,"#back"))
            {
                gap();
                printf("cancelled removing list elemetns!\n");
                showhelp();
                goto back_point;
            }
            else if(!strcmp(rmv,"#EXIT") || !strcmp(rmv,"#exit"))
            {
                printf("\nProgramme closed successfully\n");
                getchar();
                exit(0);
            }
            else if(!strcmp(rmv,"#BEGINNING")  || !strcmp(rmv,"#beginning"))
            {
                gap();
                delete_beginning();
                printf("\n1st element deleted successfully!\n\n");
                showhelp();
            }
            else if(!strcmp(rmv,"#OTHER") || !strcmp(rmv,"#other"))
            {
                int position;
                gap();
                printf("\nSerial no of the item which you want to delete:  ");
                scanf("%d",&position);
                getchar();
                printf("\n%d number element deleted successfully!\n\n",position);
                delete_mid(position);

                showhelp();
            }
            else if(!strcmp(rmv,"#LAST") || !strcmp(rmv,"#last"))
            {
                gap();
                delete_last();
                printf("\nLast element deleted successfully!\n\n");
                showhelp();
            }
            else{
                show_invalid();
                goto remv_point;
            }
        }
        else {
            show_invalid();
        }
    }
    return 0;
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

int SearchData(int key)
{
    struct node* current;
    current=head;
    FoundInfo=0;

    while(current!=NULL)
    {
        if(key==current->id)
            FoundInfo=current->id;

        current=current->next;
    }
    return FoundInfo;
}

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

void count_list()
{
    struct node *current_node;
    int count=0;

    current_node=head;

    while(current_node != NULL){
        count++;
        current_node=current_node->next;
    }
    printf("\n\n\nThere's %d sets of elements in the list\n\n",count);
}

void insert_beginning()
{
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));

    single_element(&newnode->id, &newnode->cg);

    newnode->next=head;
    head=newnode;
}

void insert_mid()
{
    int pos;
    struct node* newnode, *current_node;
    newnode=(struct node*)malloc(sizeof(struct node));

    printf("Which position you want to add: ");
    scanf("%d",&pos);

    single_element(&newnode->id, &newnode->cg);

    current_node=head;

    for(int i=1;i<pos-1;i++)
    {
        current_node=current_node->next;
    }
    newnode->next=current_node->next;
    current_node->next=newnode;
}

void insert_last()
{
    struct node* newnode, *current_node;
    newnode=(struct node*)malloc(sizeof(struct node));
    current_node=head;

    single_element(&newnode->id, &newnode->cg);

    while(current_node->next!=NULL)
    {
        current_node=current_node->next;
    }
    current_node->next=newnode;
    newnode->next=NULL;
}

void delete_beginning()
{
    struct node *current_node;

    /*
    current_node=head->next;
    free(head);
    head=current_node;
    */

    current_node=head;
    head=head->next;
    free(current_node);

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

void showhelp()
{
    printf("\ntype #HELP  if needed.\n");
    printf("_____________________________________________________________________________________\n\n");
}

void gap()
{
    printf("                 _______\n\n");
}

//void single_element(int a, float b)
void single_element(int *a,float *b)
{
    printf("Enter the  value you want to add:\nID: ");
    scanf("%d",a);
    printf("CGPA: ");
    scanf("%f",b);
    getchar();
}

void show_invalid()
{
    gap();
    printf("\nInvalid input. Enter a valid input or type  #HELP  for list of valid commands.\n");
    printf("_____________________________________________________________________________________\n\n");

}


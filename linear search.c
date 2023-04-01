#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void LinearSearch(int size, int arr[],int srch)
{
    int flag=0;
    for(int i=0; i<size ;i++)
    {
        if(arr[i]==srch){
            printf("Found\n");
            flag=1;
            break;
        }
    }
    if(flag==0) printf("Not found\n");
}

int main()
{

    return 0;
}

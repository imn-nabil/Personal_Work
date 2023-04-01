//bubble sort

#include<stdio.h>
#include<string.h>

void bubbleSort( int arr[],int size){
    int step, i, temp;

    for(step=1;step<size;++step){
        for(i=1;i<=(size-step);++i){
            if(arr[i-1]>arr[i]){
                temp=arr[i-1];
                arr[i-1]=arr[i];
                arr[i]=temp;
            }
        }
    }
}

void display(int arr[], int size){
    for(int i=0;i<size;++i){
            //4434  150tk
        printf("%d  ",arr[i]);
    }
}

void main(){
    int arr[]={541,21,54,0,54,215,6,-65,-3,8};
    int sz= sizeof (arr)/sizeof(arr[0]);

    bubbleSort(arr,sz);
    display(arr,sz);
}

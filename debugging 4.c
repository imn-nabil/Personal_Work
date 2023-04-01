#include<stdio.h>
#include<math.h>
void main()
{
    int arr[10],i,j,buff,count=0,rev[10],lng=0;

    //input nisi array te
    for(i=0;i<10;i++){
        scanf("%d",&buff);
        arr[i]=buff;
        if(arr[i]>=3&&arr[i]<=7){
            ++count;
        }
        else{continue;}
    }
    printf("\n\n");
    lng=(count-1);

    //main trick is here...
    for(i=0;i<10;i++){
        if(arr[i]>=3&&arr[i]<=7&&lng>0){
                --lng;
                rev[lng]=arr[i];
            /*
            for(j=lng;j>=0;j--,lng--){
                rev[j]=arr[i];
            }*/
        }
        else{continue;}
    }
    //printing the value
    for(j=0;j<count;j++){
        printf("%d ",rev[j]);
    }
}

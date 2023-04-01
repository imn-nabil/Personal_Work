#include <stdio.h>
int find_largest(int arra[], int n){
    int max=arra[0];
    int i;
    for(i=1;i<n;i++){
        if(arra[i]>max){
            max=arra[i];
        }
    }
    return max;
}

int find_smallest(int arra[], int n){
    int smallest=arra[0];
    for(int i=1;i<n;i++){
        if(arra[i]<smallest){
            smallest=arra[i];
        }
    }

    return smallest;
}

int find_sum(int arra[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+(int)arra[i];
    }

    return sum;
}

int find_average(int arra[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arra[i];
    }
    int average=sum/n;

    return average;
}


int main()
{
    /*
     int n,k,artcel[n];
     double val;
    printf("How many numbers would you like to enter\t");
    scanf("%d",&n);
    for(k=0;k<n;k++){
        printf("Enter the %dth number & press enter\t",k+1);
        scanf("%lf",&val);
        artcel[k]=val;
    }

    //ei portion tuku lekhe again check korsi je adow thikmoton data input nite partise kina.

    for(int h=0;h<n;h++){
        printf("%d\n",artcel[h]);
    }
    */

    // ei tuku lekhlei problem create hocche

    int n=5;
    int artcel[]={2,3,5,4,1};

    int sum,avg,smallest_number,largest_number;

    sum=find_sum(artcel,n);
    largest_number=find_largest(artcel,n);
    smallest_number=find_smallest(artcel,n);
    avg=find_average(artcel,n);


    printf("sum is %d\n",sum);
    printf("largest %d\n",largest_number);
    printf("smallest %d\n",smallest_number);
    printf("average %d\n",avg);


    return 0;
}


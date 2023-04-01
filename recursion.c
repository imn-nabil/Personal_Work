#include<stdio.h>
#include<math.h>
static int fact,n;

int factorial(int a);
void printUptoX(int i, int j);
void Sq_print_series(int x);
double root_10(int n);
int decTbin(int n);

int main()
{
//factorial
    //scanf("%d",&n);
    //printf("%d",factorial(n));

//void print recursion
    //n=1;
    //int x,y;
    //scanf("%d %d",&x,&y);
    //printUptoX(x,y);

//void print square series
    //Sq_print_series(6);
    //int num=pow(5,2);
    //printf("\n%d",num);
//root without root
    //printf("%lf",3+root_10(5));
//dec to bin
    printf("\n%d\n",decTbin(13));
    return 0;
}

int factorial(int n)
{
    if(n!=1) n=n*factorial(n-1);
    else return n;
}

void printUptoX(int i,int j)
{
    if(i<=j)
    {
        printf("%d  ",i);
        printUptoX(i+1,j);
    }
}

int sumUptoX(int x){
    int sum;
    //if(i<=x){i+=sumUptoX(}
}

void Sq_print_series(int x){
    static int n, count;
    n=x; count=x;

    if(count){
        int num=pow(n,(n-count));
        printf("%d",num);
    }
    else if(!count)  return;
    printf("+");
    count--;
    Sq_print_series(x-1);
}

double root_10(int n){
    if(n==0) return 0;
    return (1/(6+root_10(n-1)));
}

int decTbin(int n){
    int bin=0,rem=0,i=1;
    while(n!=0){
        rem=n%2;
        n/=2;
        bin=bin+rem*i;
        i*=10;
    }
    return n;
}

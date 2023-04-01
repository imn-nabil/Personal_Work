/*//5.
#include<stdio.h>
int main()
{
    int n,i,sum;

    printf("Enter a number:\t");
    scanf("%d",&n);

    for(i=1,sum=0;i<=n;i++){
        if(i%2==0&&i%3==0){
            sum+=i;
        }
        else{continue;}
    }
    printf("%d",sum);

    return 0;
}
*/
/*//6.
#include<stdio.h>
int main()
{
    double u,t,a;

    scanf("%lf %lf %lf",&u,&t,&a);
    double s=u*t+.5*a*t*t;
    printf("%lf",s);

    return 0;
}
*/
/*//7.
#include<stdio.h>
int main()
{
    int arr[10];
    int i,buff,sum,count;

    for(i=0;i<10;i++){
        scanf("%d",&buff);
        arr[i]=buff;
    }

    for(i=0,sum=0,count=0;i<10;i++){
        if(arr[i]%2!=0){
            ++count;
            sum+=arr[i];
        }
        else{continue;}
    }

    printf("%lf",(double)sum/count);

    return 0;
}
*/
/*//8.
#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){continue;}
        else{
            printf("%d  ",i*i);
        }
    }
    return 0;
}
*/

/*//9.
#include<stdio.h>
#include<math.h>

int smallest(int a, int b){
    int buff;
    (a<b) ? (buff=a):(buff=b);
    return buff;
}

int largest(int a, int b){
    int buff;
    (a>b)? (buff=a):(buff=b);
    return buff;
}

int main()
{
    int a,b,i,count;
    scanf("%d %d",&a,&b);

    for(count=0,i=smallest(a,b) ; i<=largest(a,b);i++){
        if(i%4==0){
            count++;
        }
        else{continue;}
    }
    printf("%d",count);

    return 0;
}
*/
/*//10
#include<stdio.h>
#include<math.h>
int main()
{
    int T;
    scanf("%d",&T);

    if(T<(10-8)){
        printf("Aya Porsi!");
    }
    else if(T>=(10-8)&&T<(12-8)){
        printf("Shuru Hoya Gelo!");
    }
    else{
        printf("Khaise!");
    }


    return 0;
}
*/

/*//11 problem ase
#include<stdio.h>
#include<math.h>
void main()
{
    int T1,T2,E1,E2;
    scanf("%d %d %d %d",&T1,&E1,&T2,&E2);

}
*/

/*//12
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,buff;
    scanf("%d %d",&a,&b);
    buff=b;
    printf("%d ",buff);
    buff=a;
    printf("%d ",buff);
}
*/

/*//13
#include<stdio.h>
#include<math.h>
void main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if(num==0){
        printf("You should not enter Zero!\n");
    }
    else if(num%2==0){
        printf("Result is: %d\n",num/2);
    }
    else{
        printf("Result is: %d\n1",num*3);
    }
}
*/

/*//14 shomossha ase
#include<stdio.h>
#include<math.h>
int main()
{
    int U,V,A;
    double T;
    scanf("%d %d %d",&U,&V,&A);
    T=(V-U)/A;
    printf("%lf",T);

    return 0;
}
*/

/*//15, sir day nai mone hoy
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

    lng=(count-1);

    //main trick is here...
    for(i=0;i<10;i++){
        if(arr[i]>=3&&arr[i]<=7){
            for(j=lng;j>=0;j--,lng--){
                rev[j]=arr[i];
            }
        }
        else{continue;}
    }
    //printing the value
    for(j=0;j<count;j++){
        printf("%d ",rev[j]);
    }

}
*/

/*//16
#include<stdio.h>
#include<math.h>

int Max3(int a, int b, int c){
    int num;

    if(a>b&&a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else if(c>a&c>b){
        return c;
    }
}

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",Max3(a,b,c));
    return 0;
}
*/

//17 & 15 same question.

/*//18
#include<stdio.h>
#include<math.h>
int main()
{
    int i,buff,arr[10];

    for(i=0;i<10;i++){
        scanf("%d",&buff);

        if(buff>5&&buff<10){
            buff=1;
        }
        arr[i]=buff;
    }

    for(i=0;i<10;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}
*/

/*//19 parlam na kn bujhlm na
#include<stdio.h>
#include<math.h>
void main()
{
    int cls,att;
    float prcntg;

    printf("Number of classes held: ");
    scanf("%d",&cls);

    printf("Number of classes attended: ");
    scanf("%d",&att);

    prcntg=((att/cls)*100);

    if(prcntg<75){
        printf("Percentage of classes attended: %lf \n",prcntg);
        printf("You are not allowed.\n");
    }
    else{
        printf("Percentage of classes attended: %lf \n",prcntg);
        printf("You are allowed.\n");
    }

}
*/

/*//20
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b;
    float c,d;

    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);

    printf("You entered %d and %d , their product is: %d\n",a,b,a+b);

    printf("Enter two floats: ");
    scanf("%f %f",&c,&d);

    printf("You entered %.4f and %.4f , their product is: %.4f\n",c,d,c*d);

}
*/
/*//21
#include<stdio.h>
#include<math.h>
void main()
{
    int a=1;

    while(1){
        printf("Give a number: ");
        scanf("%d",&a);

        if(a==0){break;}

        printf("The square of %d is %d\n",a,a*a);
    }
    printf("You entered zero\n");
}
*/

/*//22.
#include<stdio.h>
#include<math.h>

double addi(double a, double b){
    return (a+b);
}
double sub(double a, double b){
    return (a-b);
}
double mul(double a, double b){
    return (a*b);
}
double div(double a, double b){
    return (a/b);
}

void main()
{
    double a,b;
    printf("Enter a: ");
    scanf("%lf",&a);

    printf("Enter b: ");
    scanf("%lf",&b);

    printf("%.3f + %.3f = %.3f\n",a,b,addi(a,b));
    printf("%.3f - %.3f = %.3f\n",a,b,sub(a,b));
    printf("%.3f * %.3f = %.3f\n",a,b,mul(a,b));
    printf("%.3f / %.3f = %.3f\n",a,b,div(a,b));

}
*/


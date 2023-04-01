//1.a
#include <stdio.h>

int main()
{
  int a = 5, b = 10, c = 15;
    printf("x. a = \d\n", b-=5);

    c == (a--);

   printf("y. a = db = %d\n",a,b);

   a = ((--b) + (c++));

   printf(". c = id\n", a--);

return 0;
}

//2.a
#include <stdio.h>
int main()
{
    int i = 2;
    int j = ++i + i;
    printf("j = %d",j);
    return 0;
}

//2.b
#include <stdio.h>
#include<math.h>
int main()
{
    int a;
    a = remainder(8.2,2) ;
    printf("Value of a = %d",a);

    return 0;
}

//2.c

#include<stdio.h>
void main(){

 int x = 5;
 if (x<1);
 printf("Hello");

}

//2.d
#include<stdio.h>
 void main(){

 char a = '12';
 printf("A = %c",a);
 }


//2.e

#include<stdio.h>
 void main(){

 int a = 20, b = 15, c = 5, d;
 d = a == (b+c);
 printf("d = %d",d);

 }

//3.a
#include<stdio.h>
 int main(){

    int p = 3, q = 7, r = 9;

    r = p*3;
    printf("1. p = %d\n", p*=3);

 q = ++p - r--;
     printf("2. p = %d Q = %d\n", p++, q--);

 r = (--q) + (p++);
    printf("3. %d - %d/n", q--, ++r);

 return 0;

 }


 //3.b
 #include<stdio.h>
 int main(){

 int i,n = 1;

 for(i=1; i<20; i+=2, n++){
 if(n % 5 == 0){
    printf("H2O\n");
    n*=2;
    continue;
 }
 if(n%9 == 0){
    printf("water/n");
    break;
 }
 else{
    n+=2;
    printf("Restaurent\n");
   }
 }
 return 0;

 }


 //4.a
 #include<stdio.h>
 void main() {

 int x=5, *p= &x;
 printf("1. x=%d\n", x);
 printf("2. &x=%d\n", &x);
 printf("3. p=%d\n", p);
 (*p)++;
 printf("4. *p=%d\n",*p);
 printf("5. x=%d\n", x);
 }

//4.b
#include<stdio.h>

     int fun(int a, int *b, int c)
     {
         *b=a+c;
         return a+(*b)+c;
     }
     void main(){
     int a =3, b=5, c=7, sum = 9;
     sum=fun(a , &b, c);
     printf("A=%d B=%d c=%d sum=%d",a,b,c,sum);
     }




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
/*//11
#include<stdio.h>
#include<math.h>
void main()
{
    int T1,T2,E1,E2;
    scanf("%d %d %d %d",&T1,&E1,&T2,&E2);

    if((E1/T1)>(E2/T2)){
        printf("Blue Origin");
    }
    else{
        printf("SpaceEx");
    }
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
/*//14
#include<stdio.h>
#include<math.h>
int main()
{
    double U,V,A;
    double T;
    scanf("%d %d %d",&U,&V,&A);
    T=(V-U)/A;
    printf("%lf",T);

    return 0;
}


*/

/*//15

#include<stdio.h>
#include<math.h>
void main()
{
    int arr[10],i,j,buff,count=0,rev[10],lng=0;

//input nisi array te
    for(i=0;i<10;i++){
        scanf("%d",&buff);
        arr[i]=buff;
        if(buff>=3&&buff<=7){
            ++count;
        }
        else{continue;}
    }
//input shesh

    printf("\n\n");
    lng=(count-1);
//input er pore space er jonno


//ebare ashe shei new arrey te checking er part
    for(i=0;i<10;i++){
        if(arr[i]>=3&&arr[i]<=7&&lng>=0){
            rev[lng]=arr[i];
            --lng;
        }
    }

//ebar shei new arrey print kora
    for(i=0,lng=(count-1);i<=lng;i++){
        printf("%d ",rev[i]);
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
/*//19
//eshob jaygay multiple type er variable
//ak jygy kmne kaj koray sheta shikhte hobe,
//otherwise code run hy na thikthak.
#include<stdio.h>
#include<math.h>
void main()
{
    float cls,att;
    float prcntg;

    printf("Number of classes held: ");
    scanf("%f",&cls);

    printf("Number of classes attended: ");
    scanf("%f",&att);

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
    int n;
    while(1){
        printf("Give a number: ");
        scanf("%d",&n);
        if(n==0){
            printf("You've entered zero.\n\n");
            break;
        }
        printf("The square of %d is %d\n",n,n*n);
    }
}
*/
/*//22
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

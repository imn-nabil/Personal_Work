//hello there
/*amne comment lekhe*/


/*//parlam na sorry
{ //1st erm er 40%,st er 40%, final er 20% plus krle total mark pawa jabe in this particuler case.
    int ft_result[40]={83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
    59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
    82, 58, 69, 67, 53, 56, 71, 62},
    st_result[40]={86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
    86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
    69, 67, 53, 56, 71, 62, 49},
    final_mark[40]={87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
    69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
    55, 69, 85, 81, 80, 67, 88, 71};
    double total_mark[40];
    int i,m,p,mark[100],person[100];

    for(i=0;i<40;i++){
        total_mark[i]=ft_result[i]*.4 + st_result[i]*.4 + final_mark[i]*.2;
       // printf("Roll number %d's total mark is %0.0f\n",i+1,total_mark[i]);
    }
    for(m=0;m<=100;m++){
        mark[m]=m+1;

        for(p=0;mark[m]==total_mark[i]){
            person[p]=p+1;
        }
    }
}
*/


/*//bujhlm na
{
    int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<=3&&b!=a;b++){
            for(c=1;c<=3&&c!=a&&c!=b;c++){
                printf("%d,%d,%d\n",a,b,c);
            }
        }
    }
}
*/

#include<stdio.h>
#include<math.h>
#include<string.h>

/* @solved@ ??? hocche na kn jani
int main()
{
int x, y;
x = 1;
//x = y; //lvalue error khasse. y=x dawa lagbe
y=x;
x = 2;
printf("%d", y);
return 0;
}
*/

/* @solved@ , vul hoisilo, thik krsi
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



int main()
{
     int n,k;
     double val;
    printf("How many numbers would you like to enter\t");
    scanf("%d",&n);
    int artcel[n];
    for(k=0;k<n;k++){
        printf("Enter the %dth number & press enter\t",k+1);
        scanf("%lf",&val);
        artcel[k]=val;
    }

    //ei portion tuku lekhe again check korsi je adow thikmoton data input nite partise kina.
    printf("\n\n");
    for(int h=0;h<n;h++){
        printf("%d\n",artcel[h]);
    }

    // ei tuku lekhlei problem create hocche(ilo, thik krsi, [n] lekha jabe na call time a

    int max_number=find_largest(artcel,n); //artcel[n]    na   artcel   hobe just!!!
    printf("\n\nLargest is :  %d\n\n",max_number);

    getch();

    return 0;
}
*/

/*scanf chara a+b=sum
{
    int a,b,sum;
//ekhane iccha korle variable declare korar shomyei value assign kora jaito
//like  int a=50, b=60, sum;
    a=50;
    b=60;
    sum=a+b;
    printf("sum is %d",sum);
    return 0;
}
*/

/*multiple %d inside printf
{
    int a=50,b=60,sum=a+b;
    printf("%d+%d=%d\n",a,b,sum);
    return 0;
}*/

/* type cast
{
    int n;
    double x;
    x=10.5;
    n=(int)x;
    printf("Value of n is %d\n",n);
    printf("Value of x is %.1f\n",x);
    return 0;
}
*/

/*integer value limitation
{
    int a;

    a = 1000;
    printf("Value of a is %d\n", a);

    a = -21000;
    printf("Value of a is %d\n", a);

    a = 10000000;
    printf("Value of a is %d\n", a);

    a = -10000000;
    printf("Value of a is %d\n", a);

    a = 100020004000503;
    printf("Value of a is %d\n", a);

    a = -4325987632;
    printf("Value of a is %d\n", a);

    return 0;
}
*/

/*double data type
//18 page

{
    double a=9.5,b=8.743,sum=a+b;
    printf("sum is: %lf\n",sum);
    printf("sum is: %.2f\n",sum);
    return 0;
}
*/

/*scanf
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Summesion is %d",a+b);
    return 0;
}
*/

/*char data type
{
    char ch;
    //directly kono charecter char type variable a rakhte gele just char x=T lekhle hbe na. char x='T'  likhte hbe.
    printf("Enter a letter: \n");
    //scanf("%c",&ch);

    //scanf er bodole charecter type er jonno  getcha  use kora jay, same kaj
    ch=getchar();

    printf("the letter was:- %c\n", ch);

    putch(ch);

    return 0;
}
*/

/*//scanf + - * /
{
    double num1, num2;
    char sign;

    printf("insert a number = ");
    scanf("%lf",&num1);

    printf("insert a number = ");
    scanf("%lf",&num2);

    double add=num1+num2;
    double sub=num1-num2;
    double mult=num1*num2;
    double div=num1/num2;

    sign='+';
    printf("\n%.4f %c %.4f  = %.4f\n",num1,sign,num2,add);
    sign='-';
    printf("%.4f %c %.4f = %.4f\n",num1,sign,num2,sub);
    sign='*';
    printf("%.4f %c %.4f = %.4f\n",num1,sign,num2,mult);
    sign='/';
    printf("%.4f %c %.4f = %.4f\n",num1,sign,num2,div);

    return 0;

}
*/

/*//nested if
{
    double n;
    printf("Insert a number: \n");
    scanf("&lf",n);

    if(n>0){
        printf("The number is positive\n");
    }  //if akao use kora jay, else mandatory na.
    else if(n<0){
        printf("The number is negative\n");
    }
    //else if ta na dileo hoto, cause choto o na boro o na, so 0 e hobe. tai last a "else if" er bodole "else" dileo hoto.
    else if(n==0){ // ??? ekhane 0.0000 boshale positive nicche
        printf("The number is 0\n");
    }

    //jodi nested if else thake, suppose 4 ta, er mddhe 1 false, 2 true, tahole 2 er output pawa jabe. 3 4 check e korbe na prog.
    return 0;
}
*/

/*//vagshesh
{
    int a,b;
    scanf("%d",&a);
    b=a%2;
    if(b==0){
        printf("your number is an even number");
    }
    else{
        printf("your number is an odd number");
    }
}
*/

/*//vagshesh 2.0
{
    int a,b;
    scanf("%d",&a);
    //floating point data thakle vagshesh hobe remainder(a,b) function ide rom math.h
    if(a%2==0){
        printf("your number is an even number");
    }
    else{
        printf("your number is an odd number");
    }
}
*/
//31page red mark
/*if else &&
{
    char ch=getchar();
    if(ch>='A'&&ch<='Z'){
        printf("The letter is capital");
    }
    else if(ch>='a'&&ch<='z'){
        printf("That is a small letter");
    }
*/

/* if else ||
{   // || thakle or ager ba porer jekono akta shorto puron holei if true hobe.
    double a,b,c;
    scanf("%lf",&a);
    if(a>0||a<0){
        printf("The number is not 0");
    }
    else{
        printf("The number is 0");
    }
}
*/

/* nested ||
{
    char ch;
    ch=getchar();
    //  = value assign korte. == value check korte(milaye dekhe)
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("It's  a vowel");
    }
    else{
        printf("It's  a consonant");
    }
}
*/

/*//break
{
    double n=1;
    while(n<=100){
        printf("%.0f\n",n*n);
        n++;
        if (n==10){
            break;
        }
    }
}
*/

/* continue
{//continue mane oita skip kore porer logic test korbe & execute korbe, continue er ta execute korbe na.
    int n=0;// ??? while er mddhe || die n>10 dite partesi na kn?
    while(n<20){
        n++;
        if(n%2==0){
        //etar mane jodi vagfol 0 hoy, tahole oita execute koiro na
            continue;
        }
        printf("%d\n",n);
    }
    return 0;
}
*/

/*namota-while
{
    int mul=1,num;
    scanf("%d",&num);
    while(mul<=10){
        printf("%d x %d = %d\n",num,mul,num*mul);
        mul++;
    }
}
*/

/*//namota-for
{
    int num,mul;
    scanf("%d",&num);
//for er vitorei mul=1 die na die baire die ditam, tahole hoto for(;mul<=10;mul=mul+1)
    for(mul=1;mul<=10;mul=mul+1){
        printf("%d x %d = %d\n",num,mul,mul*num);
    }

}
*/

/*calculator-me
{
    char symbol;
    double a,b,c,d;
    scanf("%lf%c%lf",&a,&symbol,&b);

    if(symbol=='+'){
        printf("=%.3f",a+b);
    }
    else if(symbol=='-'){
        printf("=%.3f",a-b);
    }
    else if(symbol=='*'){
        printf("=%.3f",a*b);
    }
    else if(symbol=='/'){
        printf("=%.3f",a/b);
    }


}
*/

/*//namota without *
{
    int n,mul,ans=0;
    scanf("%d",&n);
    for(mul=1;mul<=10;mul++){
        ans=n+ans;
        printf("%d x %d = %d\n",n,mul,ans);
    }
}
*/

/*//namota-nested for
{
    int num,mul;
    for(num=1;num<=200;num++){
        for(mul=1;mul<=10;mul++){
            printf("%d x %d = %d\n",num,mul,num*mul);
            if(mul==10){
                printf("\n");
            }
        }
    }
}
*/

/*//namora-nested for-no *
{
    int num,mul,ans=0;
    for(num=1;num<=5;num++){
        for(mul=1;mul<=10;mul++){
                ans=ans+num;
                printf("%d x %d = %d\n",num,mul,ans);
                if(mul==10){
                    printf("\n");
                    ans=0;
            }
        }
    }
}
*/

/*//permutation basic rule
  //complicated laglo kn jni
{
    int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            if(b!=a){
                for(c=1;c<=3;c++){
                    if(c!=a&&c!=b){
                        printf("%d,%d,%d\n",a,b,c);
                    }
                }
            }
        }
    }
}
*/

/*//permutation alternative
{
    int a,b,c;
    for(a=1;a<=3;a++){
        for(b=1;b<=3;b++){
            for(c=1;c<=3;c++){
                if(a!=b&&b!=c&&c!=a){
                    printf("%d,%d,%d\n",a,b,c);
                }
            }
        }
    }
}
*/

/*//p.s. x+y scan, x-y scan. x,y value out
{
    double x,y,add,sub;
    printf("X+Y=");
    scanf("%lf",&add);
    printf("X-Y=");
    scanf("%lf",&sub);
    x=(add+sub)/2;
    y=(add-sub)/2;
    printf("x = %.2f\ny = %.2f",x,y);
}
*/

/*{//math er shutro vul kortesilam, but process exact thik silo,
    double a1,b1,c1,a2,b2,c2;

    printf("Enter the constants of 1st eq following this syntax: a1x + b1y = c1\n");
    scanf("%lf %lf %lf",&a1,&b1,&c1);
    printf("Enter the constants of 2nd eq following this syntax: a2x + b2y = c2\n");
    scanf("%lf %lf %lf",&a2,&b2,&c2);

// ??? ekhane dd agei jodi ber kori scanf er , tahole pore jaye value golmal hoye jacche, tai scanf er pore dd=() dite hbe, age ber korle math milbe na.
    double dd=(a1*b2-a2*b1);

    if (dd==0) printf("The program is unsolvable");
// ??? dd==0.0 korte boltese kn?
// ??? 53 page ekhane if((int)dd!=0)  dile ki difference hobe program execute korte?

    else{

    double x=(b2*c1-b1*c2)/dd,
           y=(a1*c2-a2*c1)/dd;

        printf("X=%.3f \nY=%.3f",x,y);
    }
    return 0;
}
*/

/*//simple interest,loan calc
{
    double loan,interest,month;
    printf("How much load did you take?  = ");
    scanf("%lf",&loan);
    printf("What is the interest rate?  = ");
    scanf("%lf",&interest);
    printf("How long before you have to pay the loan including interest?  (in months)= ");
    scanf("%lf",&month);

    double total_pay=(loan*(month/12)*interest/100)+loan,
           pay_per_month=total_pay/month;

    printf("you'll have to pay a total of %.2f\n",total_pay);
    printf("you'll have to pay %.2f monthly to pay off the loan in %0.0f months",pay_per_month,month);

    return 0;
}
*/

/*//distance travelled in 2t, other values are given
{
    double u,a,t,v,s;
        printf("Initial velocity (m/s)= ");
        scanf("%lf",&u);
        printf("Constant accelaration (m/s^2)= ");
        scanf("%lf",&a);
        printf("time (sec)= ");
        scanf("%lf",&t);
        printf("Final velocity (m/s)= ");
        scanf("%lf",&v);

        printf("THe vehicle will travle %.3f meter distance in %.3f seconds.",2*v*t,2*t);

}
*/

/*series addition upto x
{
    double a,max,sum=0;
    printf("Enter the number upto which you want to add them all up = ");
    scanf("%lf",&max);
    for(a=1;a<=max;a++){
        sum=sum+a;
    }
    printf("summission is %.0f",sum);
}
*/

/*//series addition of odd numbers upto x
{
    int b,a,max,sum=0;
    printf("Enter the number upto which you want to add them all up = ");
    scanf("%d",&max);

    for(a=1;a<=max;a++){
        b=a%2;
        if(b==0){
                continue;
        }
        else if(b!=0){
            sum=sum+a;
        }
    }
    printf("summission is %d",sum);
}
*/

/*//celcious to farenhite
{
    float f,c;
    printf("Temperature in celcius = ");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("Is equivalent to %.2f degree F",f);
}
*/

/*// IMPORTANT GCD HCF
void main()
//GCD, HCF
{
    int a,b,x;
    scanf("%d %d",&a,&b);

    if(a>b) x=b;
    else if(b>a) x=a;

    for(;x>=1;--x){
        if(a%x==0 && b%x==0){
            printf("GCD is: %d",x);
            break;
        }
    }
}

*/

/*//arrey intro

{
	int i, a[15]={5,52,56,155,62652,44,6,6,84,26,10,20,30,40,50};
	for(i=15-1;i>=0;i--){
        printf("%dth number is %d\n",i+1,a[i]);
	}
}

*/
//multiple argument for loop er () er vitr lekhte gele , use krte hy majhe

/* arrey reverse
{
	int i,j,
	a2[5],
	a1[5]={10,20,30,40,50};

	for(i=0,j=4; i<=4,j>=0; i++,j--){
	    a2[j]=a1[i];
    }
    for(i=0;i<5;i++){
        a1[i]=a2[i];
    }
    for(i=0;i<5;i++){
        printf("%d\n",a1[i]);
    }
}
*/

/*//arrey reversed treditional method
{
    int i,j,buff,arr[]={10,11,12,13};

    for(i=0,j=3;i<2;i++,j--){ //ekhane <2 dawa hoise cause ekhane last er saghe first evabe solve krte krte aschce
        buff=arr[i];
        arr[i]=arr[j];
        arr[j]=buff;
    }
    for(i=0;i<4;i++){
        printf("%d\n",arr[i]);
    }
}
*/

//main function er baire kaj, return

/*//bairer function intro
//ekhane double add  dawar jonno return type double hoise, int add  dile return type int hoto.
double add(double a,double b)
{
    double sum=a+b;
    return sum;
}
int main()
{
    double x,y,z;
    x=2.8;
    y=2.7;
    z=add(x,y);
    printf("%lf\n",z);
    return 0;
}
*/

/*//function er prototype
//ekhane iccha krle prototype er vitrer variable change kre dawa jabe tao run hbe, but data type & function er nam ta thik rakha lagbe, naile cholbe na.
double add(double h, double k);
int main()
{
    double x,y,z;
    x=2.8;
    y=2.7;
    z=add(x,y);
    printf("%lf\n",z);
    return 0;
}

double add(double a,double b)
{

    //ekhane sum use na kore direct return er vitre a+b kora jabe naki dekhte hbe
    //try krlam, same value ashe, but (double) evabe declarek re dite hbe, like so:

    double sum=a+b;
    return sum;
    //return (double)a+b;
}
*/

/*//ekhane banano function er karjokolap er serial dekhaise
int test_function(int x)
{
    int y=x;
    x=2*y;
    return (x*y);
}
int main()
{
    int x=10, y=20,z=30;
    z=test_function(x);
    printf("%d\t%d\t%d\n",x,y,z);
    return 0;
}
*/

/*
double pi=3.14;
void my_func(){
    pi=3.14159;//hudai pi er value duidike 2 ta die priority bujhacche
    return;
}
int main()
{
    printf("%lf\n",pi);//ekhaen pi hobe 3.14,cause global func chara r kono declaration nai er age et anie.
    my_func();
    printf("%lf\n",pi);//ekhane my_func call korse jnne pi er value ashbe custom function er ta, globa ler ta na.
    return 0;
}
*/

/*// printing prime numbers upto a point
int main()
{
    double i,up_to,counter=0,buffer;
    printf("Enter an integer\t",up_to);
    scanf("%lf",&up_to);

    for(buffer=1,counter=0 ; buffer<=up_to ; buffer++){
        counter=0;
    //checking the buffer if prime or not
        for(i=1;i<=buffer;i++){
            if(remainder(buffer,i)==0){
                counter++;
            }
            else{continue;}
        }

        if(counter==2){
            printf("\t%0.0f is a prime number.\n",buffer);
        }
        else if(counter>2){
            printf("\t%0.0f is a composite.\n",buffer);
        }
        else if(counter<2){
            printf("\t%0.0f is nothing\n",buffer);
        }
    }

    return 0;
}
*/

/*more efficient way prime number upto a point
int prime7(long long int a)
{
    if(a<=2) return 1;
    else
    {
        for(int i=2; i<=sqrt(a); ++i)
        {
            if(a%i==0) return 0;
        }
        return 1;
    }
}
int main()
{
    int i,a=100;

    for(i=1; i<=a ; i++){
        if(prime7(i)==1) printf("%d\n",i);
        else continue;
    }
    return 0;
}

*/

/*//value overwrite with function in arrey
void test_function(int ara[])
{
    ara[0]=100;
    return;
}
int main()
{
    int ara[]={1,2,3,4,5};

    printf("%d\n",ara[0]);
    //function call korar shomoye function er return type ullekh korar dorkar nai. just function name & parameter dite hy.
    test_function(ara);
    printf("%d\n",ara[0]);

    return 0;

}
*/

/*//area of circle using global function & custom function
double pi=3.14159;
double area_circle(int r)
{
    double area=pi*r*r;
    return area;
}

int main()
{
    double radius;
    printf("Enter the radius of the circle\t");
    scanf("%lf",&radius);
    printf("The area is %0.3f",area_circle(radius));

    return 0;
}
*/

//while(1) mane infinitely cholte thakbe

/*//value finder from arrey, auto counting how many entries in arrey.
int main()
{
    int ar[34]={1,5,7,9,14,25,37,
                39,49,48,52,54,58,
                59,63,68,69,72,73,
                75,76,79,82,83,86,
                87,89,92,94,96,97,
                98,99,100},
    low_ind, mid_ind, high_ind;
    int num;

    printf("Enter an integer number =\t");
    scanf("%d",&num);

    low_ind=0;
    high_ind=sizeof(ar)/sizeof(ar[0]);
    //sizeof(array)/sizeof(array[0]) use kore arrey er size mapa hoy je koyta value ase.

    while(low_ind<=high_ind){
        mid_ind=(high_ind+low_ind)/2;

        if(num==ar[mid_ind]){
            break;
        }
        else if(num<ar[mid_ind]){
            high_ind = mid_ind -1;
        }
        else if(num>ar[mid_ind]){
            low_ind = mid_ind +1;
        }
    }

    if(low_ind>high_ind){
        printf("The number is not found");
    }
    else{
        printf("The number %d is found.\nIt is the %dth element of the arrey.\n\n",num,(mid_ind+1));
    }
}
*/

/*
int main()
{
    //char country[]={'B','a','n','g','l','a','d','e','s','h','\0'};
    //char country[]={'B','a','n','g','l','a','d','e','s','h'};
    //char country[]={'B','a','n','g','\0','l','a','d','e','s','h'};
    //ekhane last a '\0' na dile shomossha hbe.
    printf("%s",country);
    return 0;
}
*/


/* converting small letter to capital in a string
int main()
{
    char country[]={'B','a','n','g','l','a','d','e','s','h'};
    int i;
    //printf("%d\n",sizeof(country)/sizeof(country[0]));
    printf("%s",country);
    printf("\n");
    for(i=0;i<sizeof(country)/sizeof(country[0]);i++){
        if(country[i]>=97&&country[i]<=122){
            country[i]='A'+(country[i]-'a');
        }
    }
    printf("%s",country);
    return 0;
}
*/


/*//capital to small letter
int main()
{
    char country[]={'b','A','N','G','L','A','D','E','S','H'};
    int i;

    for(i=0;i<(sizeof(country)/sizeof(country[0]));i++){
        if(country[i]>='a'&&country[i]<='z'){
            continue;
        }
        else if(country[i]>='A'&&country[i]<='Z'){
            country[i]='a'+(country[i]-'A');
        }
    }
    printf("%s",country);
    return 0;
}
*/

/*//hardcoded string er charecter count.
int its_length(char str[]){
    int i,num=0;
    for(i=0 ; str[i]!='\0' ; i++){
        num++;
    }
    return num;
}

int main()
{
    //ekhane {bangladesh} lekha jabe na. syntax eita na string er.
    char country[]="bANGLADESH";
    printf("%d",its_length(country));

    return 0;
}
*/

/*//Inputting string &checking the charecter count.
int its_length(char str[]){
    int i,num=0;
    for(i=0 ; str[i]!='\0' ; i++){
        num++;
    }
    return num;
}

int main()
{
    //ekhane {bangladesh} lekha jabe na. syntax eita na string er.
    char country[10000];//size na dile initialize hy na
    while(1==scanf("%s",country)){
        printf("%d\n",its_length(country));
    }
    return 0;
}
*/

/*//gets(). NULL
int main()
{
    char n_array[10];
    while (NULL!=gets(n_array)){
        printf("%s\n",n_array);
    }
    return 0;
}
*/

/*//string length declare na kroleo hoy.
int string_length(str[])
{
    int i;
    for(i=0;str[i]!='\0';i++);
    return i;
}
*/

/*//string length without for loop. (while)
int string_length(char str[])
{
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}
*/

/*//adding up 2 strings Bangla+desh=Bangladesh
int string_length(char str[])
{
    int i=0;
    while(str[i]!='\0'){
        i++;
    }
    return i;
}

int main()
{
    char str1[]="Bangla",
         str2[]="desh",
         str3[string_length(str1)+string_length(str2 )];

    int i=0,j=0;

    for(i=0;i<string_length(str1);i++,j++){
        str3[j]=str1[i];
    }

    for(i=0;i<string_length(str2);i++,j++){
        str3[j]=str2[i];
    }

    str3[j]='\0';

    printf("%s",str3);

    return 0;
}
*/

/*//counting how many digits are in a number
int main()
{
    int i=0,num;
    printf("Enter a number:\t");
    scanf("%d",&num);

    while(num!=0){
        num=num/10;
        ++i;
    }
    printf("%d",i);
    return 0;
}
*/

/*// diamond pattern using *
#include <stdio.h>
int main(void)
{
    int i,j,n,buff,bfs,sz,gp,str;

    scanf("%d",&sz);
    printf("\n\n\n");

    buff=sz-1;

    for(i=1;i<=sz;++i){
        for(gp=buff;gp>0;--gp){
            printf("    ");
        }
        if(buff>=0){--buff;}

        for(str=1;str<=(i*2)-1;++str){
            printf("*   ");
        }
        printf("\n");
    }

    bfs=str;
    for(;i>0;--i){
        ++buff;
        for(gp=0;gp<=buff;++gp){
            printf("    ");
        }

        bfs-=2;
        for(str=bfs;str>1;--str){
            printf("*   ");
        }
        printf("\n");

    }

    return 0;
}

*/

/*//month number to month name

#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    switch(num)
    {
        case 1:
            printf("January.\n");
            break;
        case 2:
            printf("February.\n");
            break;
        case 3:
            printf("March.\n");
            break;
        case 4:
            printf("April.\n");
            break;
        case 5:
            printf("May.\n");
            break;
        case 6:
            printf("June.\n");
            break;
        case 7:
            printf("July.\n");
            break;
        case 8:
            printf("August.\n");
            break;
        case 9:
            printf("September.\n");
            break;
        case 10:
            printf("October.\n");
            break;
        case 11:
            printf("November.\n");
            break;
        case 12:
            printf("December.\n");
            break;
        default:
            printf("Enter a number between 1~12\n");
    }
}
*/

/*
// Take two inputs from user and find their summation, average, Multiplication, division, subtraction, modulation by using function use different function for different task such as use function summation () for summation.
#include<stdio.h>

//sum
double summation(double a,double b){
    return (a+b);
}

//avg
double avg(double a,double b){
    return ((a+b)/2);
}

//mul
double mult(double a,double b){
    return (a*b);
}

//div
double div(double a,double b){
    return (a/b);
}

//sub
double sub(double a,double b){
    return (a-b);
}

//mod
int modls(int a,int b){
    return (a%b);
}


int main()
{
    double a,b;

    printf("Enter 2 numbers\n");
    scanf("%lf %lf",&a,&b);

    printf("\nSummation is %lf\n",summation(a,b));
    printf("Average is %lf\n",avg(a,b));
    printf("Multiplicaion is %lf\n",mult(a,b));
    printf("Division is %lf\n",div(a,b));
    printf("subtraction is %lf\n",sub(a,b));

    printf("\nEnter 2 more numbers for doing modulus\n");

here:
    scanf("%lf %lf",&a,&b);
    if(a==(int)a&&b==(int)b){
        printf("Modulus is %d\n",modls(a,b));
    }
    else{
        printf("Sorry! Enter 2 decimal values\n");
            goto here;
    }

    return 0;
}

*/

/*//sorting numbers in ascending or discending

#include <conio.h>
#include <stdio.h>
#include <string.h>

void main()
{
    int i,n;

    printf("ENter arrey sieze:  ");
    scanf("%d",&n);

    float ar[n],buff,temp;

    printf("Enter numbers: ");
    for (i = 0; i < n; i++) {
        scanf("%f",&buff);
        ar[i]=buff;
    }
    printf("\n");
// j = i+1   (important)
    for (i = 0;i<n; i++){
        for (int j = i+1;j<n; j++){
            if(ar[i]>=ar[j]){//replace > with < for descending
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
        printf("%0.0f  ",ar[i]);
    }
}

*/


/*//string reverse using strrev()
void main()
{
    char s1[30]="Imran Mehedi Nabil";
    strrev(s1);
    puts(s1);
}
*/

/*//prime check korar functuion

int prime7(int a)
{
    int flag=0;
    if(a<=2) return 1;
    else{
        for(int i=2; i<sqrt(a); ++i){
            if(a%i==0) return 0;
        }
        return 1;
    }
}
*/

int main()
{
    char in[1000];
    int i,word=0;
    gets(in);
    int len=strlen(in);
    for(i=0; i<strlen(in); ++i){
        if(in[i]==' '){
            printf("\n");
        }
        else if(in[i]>='a'&&in[i]<='z' && in[i]>='A'&&in[i]<='Z' && in[i]>='0'&&in[i]<='9'){
            if(word==0) printf("%c",in[i]);
            else if(word==1) printf("%c",'A'+in[i]-'a');
        }
    }
    return 0;
}




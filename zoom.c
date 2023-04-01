#include<stdio.h>
int main()
{
    int a=3,b=4,x=5,i;
    double c,d;
    float e,f;
    long int g,h;
    char ch1,ch2;
    /*input output
    //vul hote pare, dekhe nite hobe
    //char str1[],str2[];

    //scanf("%d %lf %f %ld %c",&a,&c,&e,&g,&ch1);

    //ch2=getch();

    //printf("%d \n%lf \n%f \n%ld\n %c\n",a,c,e,g,ch1);
    //printf("The ch2 is %c",ch2);
    */


//    if(/*shorto*/a<b){
//        printf("The smaller number is a= %d\n",a);
//        /*ja kaj korbo sheita*/
//    }
//    /*shorto na mille skip kore ekhane ashbe*/
//    else{
//        /*if execute na hole eituku execute hobe
//        ekhetre kono shorter dorkar hobe na*/
//        printf("The smaller number is b= %d\n",b);
//    }

/*//largest number among 3
    if(a>b){
        if(a>c){
            printf("The largest number is a=%d\n",a);
        }
        else{
            printf("The largest number is c=%d\n",c);
        }
    }
    else{
        if(b>a){
            printf("The largest number is b=%d\n",b);
        }
        else{
            printf("The largest number is a=%d\n",a);
        }
    }
*/

//    while(a>0){
//        printf("%d\n",a);
//        a++;
//    }

    //int a=3,b=4,x=5,i;

    //i=a++ + --x - b-- + --a - x;
    printf("a=%d\n",a);
    c=(double)a++ / --x;
    printf("c=%lf\n",c);
    printf("a=%d\n",a);

    return 0;
}

#include<stdio.h>
int main()
{
    #include<stdio.h>
int main(){
int id =9293;

int a,b,c,d;
printf("id=%d\n",id);
a=id%10;
printf("a=%d\n",a);
id=id/10;
printf("id=%d\n",id);
b=id%10;
printf("b=%d\n",b);
id=id/10;
printf("id=%d\n",id);
c=id%10;
printf("c=%d\n",c);
id=id/10;
printf("id=%d\n",id);
d=id%10;
printf("d=%d\n",d);
id=id/10;
printf("id=%d\n",id);
printf("a=%d , b= %d , c= %d, d=%d\n",a,b,c,d);




int age = a+b+c+d;
printf("age =%d\n",age);
if(age>30){printf("can vote with priority\n");
    if (age>34){
    printf("age > 34");}
    else if (age>31){
        printf("age > 31");
    }
}
else if(age>=18){printf("can vote\n");}
else{printf("can not vote\n");}


printf("\n");

int sum =0;
int i;
for (i =0 ; i<=age; i++){
    printf("%d , ",i);
    sum = sum+i;
}
printf("\n sum = %d \n",sum);
float avg;
printf(" i = %d \n",i);
avg = (float)sum/(float)i;
printf("avg = %f", avg);
}
    returm 0;
}

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    double salary,ext;

    scanf("%lf",&salary);

    if(salary>=0 && salary<=400){
        ext=salary*0.15;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 15 %%\n",salary+ext,ext);
    }
    else if(salary>400 && salary<=800){
        ext=salary*0.12;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 12 %%\n",salary+ext,ext);
    }
    else if(salary>800 && salary<=1200){
        ext=salary*0.1;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 10 %%\n",salary+ext,ext);
    }
    else if(salary>1200 && salary<=2000){
        ext=salary*0.07;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 7 %%\n",salary+ext,ext);
    }
    else if(salary>1200){
        ext=salary*0.04;
        printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 4 %%\n",salary+ext,ext);
    }
    return 0;
}


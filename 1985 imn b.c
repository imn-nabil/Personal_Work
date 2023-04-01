#include<stdio.h>
#include<string.h>

int main()
{
    int n,prod,val;
    float total=0;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        scanf("%d %d",&prod,&val);
        switch (prod){
            case 1001:
                total=total+(1.5*val);
                break;
            case 1002:
                total=total+(2.5*val);
                 break;
            case 1003:
                total=total+(3.5*val);
                 break;
            case 1004:
                total=total+(4.5*val);
                 break;
            case 1005:
                total=total+(5.5*val);
                 break;
        }
    }
    printf("%0.2f\n",total);

    return 0;
}


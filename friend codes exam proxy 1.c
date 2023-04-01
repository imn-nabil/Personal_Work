/*#include<stdio.h>
int main()
//a
{
    int a,b,t;

    scanf("%d",&t);
    for(int i=1; i<=t; i++){
        scanf("%d %d",&a,&b);
        printf("Case %d: %d\n",i,a+b);
    }
    return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int n, rev = 0, rem, org,t;

    scanf("%d", &t);

    for(int i=0; i<t ; i++)
    {
        scanf("%d", &n);
        org = n;
        rev = 0;

        while (n != 0)
        {
            rem = n % 10;#include <stdio.h>
#include <math.h>
#define PI 2*acos(0.0)
int main()
{
    int a;
    int b;
    double c,d;
    double e;
    double f; double g;
    double h;
    double r;
    scanf("%d", &b);
    for(a=1; a<=b; a++)
    {
        scanf("%lf", &r);
       c=(r*r)*(4-PI)+pow(10,(-9));
        printf("Case %d: %.2lf\n",a,c);
    }
    return 0;
}
            rev=rev * 10 + rem;
            n /= 10;
        }

        if (org==rev) printf("Case %d: Yes\n",i+1,rev);
        else printf("Case %d: No\n",i+1,rev);

    }
    return 0;
}
*/

/* e
{
    int k, p1, p2, i=1;
    scanf("%d", &k);
    while(k--)
    {

        scanf("%d%d", &p1, &p2);
        if(p1==p2)
            printf("Case %d: %d\n", i++, p1*4+19);
        else if(p1<p2)
            printf("Case %d: %d\n", i++, p2*4+19);
        else
            printf("Case %d: %d\n", i++, (p1-p2+p1)*4+19);
    }
    return 0;
}
*/

/*

*/
/*#include <stdio.h>
#include <math.h>

#define PI 2*acos(0.0)
int main()
{
    int a,b;
    double c,r;
    scanf("%d", &b);
    for(a=0; a<b; a++)
    {
        scanf("%lf", &r);
        c=(r*r)*(4-PI)+pow(10,(-9));
        printf("Case %d: %.2lf\n",a,c);
    }
    return 0;
}
*/


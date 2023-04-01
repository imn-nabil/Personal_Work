#include <stdio.h>
#include<math.h>
int main()

{

    //1st erm er 40%,st er 40%, final er 20% plus krle total mark pawa jabe in this particuler case.
    int ft_result[40]={83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
    59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
    82, 58, 69, 67, 53, 56, 71, 62},
    st_result[40]={86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
    86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
    69, 67, 53, 56, 71, 62, 49},
    final_result[40]={87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
    69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
    55, 69, 85, 81, 80, 67, 88, 71};
    int total_mark[40];
    int i,m,n,p,q,mark[100],person_count[100];

    for(i=0 ; i<40 ; i++){
        total_mark[i]=ft_result[i]*.4 + st_result[i]*.4 + final_result[i]*.2;
        //printf("Roll number %d's total mark is %0.0f\n",i+1,total_mark[i]);
    }

    for(m=0;m<100;m++){
        n=m+1;
        mark[m]=n;
       // printf("%d\n",mark[m]);
    }

//er ager line obdi thik ase

    while(m<=100){
        if(mark[m]==total_mark[i]){
            q=p+1;
            person_count[p]=q;
        }
        else if(mark[m]!=total_mark[i]){break;}
    i++;
    }

    for(p=0;p<=100;p++){
        printf("%d\n",person_count[p]);
    }
}

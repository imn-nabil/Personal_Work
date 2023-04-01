#include<stdio.h>
#include<string.h>

int main()
{
    char lines[1000], word[50];
    int ll,lw,i,j,temp=0,buff=0,count=0,flag=0;

    gets(lines);
    gets(word);

    ll=strlen(lines);
    lw=strlen(word);

    for(i=0;i<ll;){
        for(j=0;j<lw;j++){
            if(word[j]==lines[i]) {
                count++;
                if(count==lw){
                    flag++;
                    count=0;
                }
            }
            else j=0;
            i++;
        }
    }
    printf("%d\n",flag);
    //return 0;
}

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    char s[100],buff;

    gets(s);

    int lengthS=strlen(s);

    for(int i=0; i<lengthS; i+=2)
    {
        for(int j=i+2; j<lengthS; j+=2) {
            if(s[i]>s[j])
            {
                buff = s[i];
                s[i] = s[j];
                s[j] = buff;
            }
        }
    }

    puts(s);

    return 0;
}

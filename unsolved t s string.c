//solve hoyni,don't delete

#include <stdio.h>
#include <string.h>
int main()
{
    char s[1002], word[100];
    int i, j, length, flag;
    gets(s);
    length = strlen(s);
    flag = 0;
    for (i = 0, j = 0; i < length; i++)
    {
//chekc j word shuru & choto hater naki, hole boro banate hobe bolse
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (flag == 0)
            {
                flag = 1;
                word[j] = 'A' + s[i] - 'a'; // first character is capital
                j++;
            }
            else
            {
                word[j] = s[i];
                j++;
            }
        }
//chekc j word shuru & boro hater naki, hole boro banate hobe na
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            if (flag == 0)
            {
                flag = 1;
            }
            word[j] = s[i];
            j++;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            if (flag == 0)
            {
                flag = 1;
            }
            word[j] = s[i];
            j++;
        }
        else
        {
            if (flag == 1)
            {
                flag = 0;
                word[j] = '\0';
                printf("%s\n", word);
                j = 0;
            }
        }
    }
    return 0;
}


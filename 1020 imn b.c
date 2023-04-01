#include <stdio.h>

int main() {

    int days;
    printf("%d ano(s)\n",(int)days/365);
    printf("%d mes(es)\n",(int)(days%365)/30);
    printf("%d dia(s)\n",(int)((days%365)%30));

    return 0;
}

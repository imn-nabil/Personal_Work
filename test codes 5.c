#include <stdio.h>

int main() {

    int x,y,high,low;
    scanf("%d %d",&x,&y);
    (x>y)? (high=x,low=y) : (high=y,low=x);
    printf("%d %d",high,low);

    return 0;
}

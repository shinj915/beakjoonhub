#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    if(a>0&&b>0)
        printf("%d", 1);
    else if(a<0&&b>0)
        printf("%d", 2);
    else if(a<0&&b<0)
        printf("%d", 3);
    else if(a>0&&b<0)
        printf("%d", 4);
}
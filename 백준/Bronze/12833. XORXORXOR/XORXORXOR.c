#include <stdio.h>

int main()
{
    int a, b, c;
    int temp;
    
    scanf("%d %d %d", &a, &b, &c);
    temp = c % 2? a^b : (a^b)^b;
    printf("%d", temp);
    return 0;
}
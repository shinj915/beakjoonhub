#include <stdio.h>

int main()
{
    char    str[100] = {0, };
    int     len = 0;
    int     i = 0;
    scanf("%s", str);
    
    for (int i = 0; str[i] != 0; i++)
        len++;
    printf("%d", len);
    return (0);
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char    *s = (char *)malloc(sizeof(char *));
    int     i = 0;
    
    scanf("%s", s);
    scanf("%d", &i);
    
    printf("%c", s[i - 1]);
    return 0;
}
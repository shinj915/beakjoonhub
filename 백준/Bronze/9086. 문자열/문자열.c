#include <stdio.h>
#include <string.h>

int main()
{
    int     t;
    int     len;
    char    s[1001] = { 0, };

    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%s", s);
        len = strlen(s);
        printf("%c%c\n", s[0], s[len - 1]);
    }
    return 0;
}
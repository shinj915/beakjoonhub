#include <stdio.h>
#include <stdlib.h>

int get_min(int count[5])
{
    int min = 1000;
    int i = 0;

    while (i < 5)
    {
        if (count[i] < min)
            min = count[i];
        i++;
    }
    return (min);
}

int main()
{
    int     n;
    int     result;
    int     count[5] = { 0, };
    char    *s;

    scanf("%d", &n);
    s = (char *)malloc(sizeof(char) * n);
    scanf("%s", s);

    while (*s != 0)
    {
        if (*s == 'u')
            count[0] += 1;
        else if (*s == 'o')
            count[1] += 1;
        else if (*s == 's')
            count[2] += 1;
        else if (*s == 'p')
            count[3] += 1;
        else if (*s == 'c')
            count[4] += 1;
        s++;
    }
    printf("%d", get_min(count));
    return (0);
}
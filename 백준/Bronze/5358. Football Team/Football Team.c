#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name = calloc(sizeof(int), 50);
    
    while(scanf("%c", name) != EOF)
    {
        if (*name == 'i')
            *name = 'e';
        else if (*name == 'e')
            *name = 'i';
        else if (*name == 'I')
            *name = 'E';
        else if (*name == 'E')
            *name = 'I';
        printf("%c", *name);
    }

    return 0;
}

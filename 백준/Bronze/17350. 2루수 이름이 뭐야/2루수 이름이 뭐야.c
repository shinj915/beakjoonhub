#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    char **name = malloc(sizeof(char *) * n);
    int anj = 0;
    for (int i = 0; i < n; i++)
    {
        name[i] = (char *)calloc(sizeof(char), 100);
        scanf("%s", name[i]);
        if (strcmp(name[i], "anj") == 0)
            anj = 1;
    }
    if (anj == 1)
        printf("뭐야;");
    else
        printf("뭐야?");
    return 0;
}
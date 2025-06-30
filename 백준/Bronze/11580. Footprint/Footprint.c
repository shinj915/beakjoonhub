#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **coordinate = (int **)calloc(2001, sizeof(int *));
    for (int i = 0; i < 2001; i++)
    {
        *(coordinate + i)= (int *)calloc(2001, sizeof(int));
    }
    int x = 1000;
    int y = 1000;
    coordinate[x][y] = 1;
    int result = 0;
    
    int l;
    scanf("%d", &l);
    char *cmd = (char *)malloc(sizeof(char) * l);
    scanf("%s", cmd);
    for (int i = 0; i < l; i++)
    {
        if (cmd[i] == 'E')
            coordinate[++x][y] = 1;
        if (cmd[i] == 'W')
            coordinate[--x][y] = 1;
        if (cmd[i] == 'S')
            coordinate[x][++y] = 1;
        if (cmd[i] == 'N')
            coordinate[x][--y] = 1;
    }
    for (int i = 0; i < 2001; i++)
    {
        for (int j = 0; j < 2001; j++)
        {
            if (coordinate[i][j] == 1)
                result++;
        }
    }
    printf("%d", result);
    return 0;
}
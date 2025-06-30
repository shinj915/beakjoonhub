#include <stdio.h>

int main()
{
    int n, chicken[3];
    int result = 0;
    scanf("%d", &n);
    scanf("%d %d %d", &chicken[0], &chicken[1], &chicken[2]);
    
    for (int i = 0; i < 3; i++)
    {
        if (n < chicken[i])
            chicken[i] = n;
        result += chicken[i];
    }
    
    printf("%d", result);
    return 0;
}
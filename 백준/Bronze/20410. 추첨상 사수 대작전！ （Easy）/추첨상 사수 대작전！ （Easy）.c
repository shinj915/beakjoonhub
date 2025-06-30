#include <stdio.h>

int main(void)
{
    int a, c, m, seed, x1, x2;
    
    scanf("%d %d %d %d", &m, &seed, &x1, &x2);
    
    for (a = 0; a < m; a++)
    {
        for (c = 0; c < m; c++)
        {
            if ((x1 == (a * seed + c) % m) && (x2 == (a * x1 + c) % m))
            {
                printf("%d %d", a, c);
                return (0);
            }
        }
    }
    return (0);
}
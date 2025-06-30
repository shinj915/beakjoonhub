#include <stdio.h>

int main()
{
    int n, v, result = 0;
    scanf("%d", &n);
    int nn[n];
    
    for (int i = 0; i < n; i++)
        scanf("%d ", &nn[i]);
        
    scanf("%d", &v);
    
    for (int i = 0; i < n; i++)
    {
        if (nn[i] == v)
            result += 1;
    }
    printf("%d", result);
    return 0;
}
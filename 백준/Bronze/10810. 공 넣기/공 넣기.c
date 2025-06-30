#include <stdio.h>

int main()
{
    int n, m;
    int basket[100] = { 0, };
    int i, j, k;

    scanf("%d %d", &n, &m);
    
    for (int q = 0; q < m; q++)
    {
        scanf("%d %d %d", &i, &j, &k);
        while (i <= j)
        {
            basket[i] = k;
            i++;
        }
    }
    for (int q = 1; q <= n; q++)
        printf("%d ", basket[q]);
    return 0;
}
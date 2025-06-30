#include <stdio.h>

int main()
{
    int n, m;
    int basket[100];
    int i, j;
    int temp = 0;

    scanf("%d %d", &n, &m);
    
    for (int k = 0; k < n; k++)
        basket[k] = k + 1;
        
    for (int k = 0; k < m; k++)
    {
        scanf("%d %d", &i, &j);
        temp = basket[i - 1];
        basket[i - 1] = basket[j - 1];
        basket[j - 1] = temp;
    }
    for (int k = 0; k < n; k++)
        printf("%d ", basket[k]);
    return 0;
}
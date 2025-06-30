#include <stdio.h>

int main()
{
    int n, m, k;
    int num = 0;

    scanf("%d %d %d", &n, &m, &k);
    printf("%d %d", k / m, k % m);
    return 0;
}
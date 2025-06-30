#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int i, j;
    int *numbers;
    int *sums;
    int sum = 0;

    scanf("%d %d", &n, &m);
    numbers = calloc(sizeof(int), n + 1);
    sums = calloc(sizeof(int), n + 1);
    for (int k = 1; k < n + 1; k++)
    {
        scanf("%d", numbers + k);
        sum += numbers[k];
        sums[k] = sum;
    }
    for (int k = 0; k < m; k++)
    {
        scanf("%d %d", &i, &j);
        printf("%d\n", sums[j] - sums[i - 1]);
    }
    return 0;
}
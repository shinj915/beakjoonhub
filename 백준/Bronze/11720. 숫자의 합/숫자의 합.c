#include <stdio.h>

int main()
{
    int n;
    char n_array[100];
    int result = 0;

    scanf("%d", &n);
    scanf("%s", n_array);
    for (int i = 0; i < n; i++)
        result = result + n_array[i] - 48;
    printf("%d", result);
    return 0;
}
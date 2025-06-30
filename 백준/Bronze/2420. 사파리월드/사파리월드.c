#include <stdio.h>

int main()
{
    long n, m;
    long long result = 0;
    
    scanf("%ld %ld", &n, &m);
    result = m - n;
    if (result < 0)
        result = -result;
    printf("%lld", result);
    return 0;
}
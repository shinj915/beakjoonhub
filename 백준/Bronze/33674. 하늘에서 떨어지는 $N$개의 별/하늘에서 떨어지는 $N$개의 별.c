#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int d;
    int k;
    int *s;
    
    int s_max = 0;
    int simul = 0;
    int result = 0;
    
    scanf("%d %d %d", &n, &d, &k);
    s = (int *) malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s[i]);
        if (s[i] > s_max)
            s_max = s[i];
    }
    for (int i = 0; i < d; i++)
    {
        simul += s_max;
        if (simul > k)
        {
            simul = s_max;
            result++;
        }
    }
    printf("%d", result);
    return 0;
}

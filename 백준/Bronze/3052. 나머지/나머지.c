#include <stdio.h>

int main()
{
    int num[10];
    int result = 0;
    
    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &num[i]);
        num[i] %= 42;
    }
    
    for (int i = 0; i < 10; i++)
    {
        int same = 0;
        for (int j = 0; j < i; j++)
        {
            if (num[i] == num[j])
                same +=  1;
        }
        if (same == 0)
            result += 1;
    }
    printf("%d", result);
    return 0;
}

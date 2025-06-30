#include <stdio.h>

int main()
{
    unsigned int num[5];
    unsigned val_num = 0;
    scanf("%d %d %d %d %d", &num[0], &num[1], &num[2], &num[3], &num[4]);
    
    for (int i = 0; i < 5; i++)
    {
        num[i] *= num[i];
        val_num += num[i];
    }
    printf("%u", val_num % 10);
    return 0;
}
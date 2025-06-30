#include <stdio.h>

int kipa(int num)
{
    int ret = 1;
    if (num > 9)
    {
        ret = kipa(num / 10);
        return (ret * kipa(num % 10));
    }
        return (num);
}

int main()
{
    int num;
    int step = 0;

    scanf("%d", &num);
    
    while (num > 9)
    {
        num = kipa(num);
        step ++;
    }
    printf("%d", step);
    return 0;
}

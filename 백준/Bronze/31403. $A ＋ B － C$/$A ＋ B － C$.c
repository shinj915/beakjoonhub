#include <stdio.h>
#include <math.h>

int get_num_len(int b)
{
    int len = 1;
    
    while(b >= 10)
    {
        len++;
        b /= 10;
    }
    return (len);
}

int main(void)
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    
    int b_len = get_num_len(b);
    
    printf("%d\n", a + b - c);
    printf("%d\n", (int)(a * pow(10, b_len) + b - c));
    return (0);
}
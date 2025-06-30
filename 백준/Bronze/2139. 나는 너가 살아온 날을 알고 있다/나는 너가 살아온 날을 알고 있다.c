#include <stdio.h>

int main()
{
    int d, m, y;
    int feb;

    while (1)
    {
        int result = 0;
        scanf("%d %d %d",&d, &m, &y);
        if (d == 0 && m == 0 && y == 0)
            break ;
        if (y % 4 == 0)
        {
            if (y % 100 == 0)
            {
                if (y % 400 == 0)
                    feb = 29;
                else
                    feb = 28;
            }
            else
                feb = 29;
        }
        else
            feb = 28;
        result += d;
        if (m > 1)
            result += 31;
        if (m > 2)
            result += feb;
        if (m > 3)
            result += 31;
        if (m > 4)
            result += 30;
        if (m > 5)
            result += 31;
        if (m > 6)
            result += 30;
        if (m > 7)
            result += 31;
        if (m > 8)
            result += 31;
        if (m > 9)
            result += 30;
        if (m > 10)
            result += 31;
        if (m > 11)
            result += 30;
        printf("%d\n", result);
    }
    return 0;
}
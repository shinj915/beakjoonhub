#include <stdio.h>

int main()
{
    int student[30] = { 0, };
    int sub;

    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &sub);
        student[sub - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if (!student[i])
            printf("%d\n", i + 1);
    }
    return 0;
}

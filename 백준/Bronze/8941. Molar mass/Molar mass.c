#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int     input_num = 0;
    int     len = 0;
    int     num_count = 0;
    char    *t = (char *)malloc(11 * sizeof(char *));

    scanf("%d", &input_num);
    for (int i = 0; i < input_num; i++)
    {
        scanf("%s", t);
        len = strlen(t);
        int    element_count[4] = { 0, }; //[0] = C, [1] = H, [2] = O, [3] = N
        for (int j = 0; j < len; j++)
        {
            if (t[j] == 'C')
                element_count[0]++;
            if (t[j] == 'H')
                element_count[1]++;
            if (t[j] == 'O')
                element_count[2]++;
            if (t[j] == 'N')
                element_count[3]++;
            
            if (isdigit(t[j]))
            {
                if (t[j - 1] == 'C')
                {
                    num_count = atoi(&t[j]) - 1;
                    element_count[0] += num_count;
                }
                if (t[j - 1] == 'H')
                {
                    num_count = atoi(&t[j]) - 1;
                    element_count[1] += num_count;
                }
                if (t[j - 1] == 'O')
                {
                    num_count = atoi(&t[j]) - 1;
                    element_count[2] += num_count;
                }
                if (t[j - 1] == 'N')
                {
                    num_count = atoi(&t[j]) - 1;
                    element_count[3] += num_count;
                }
            }
        }
        printf("%.3f\n", element_count[0]*12.01 + element_count[1]*1.008 + element_count[2]*16.00 + element_count[3]*14.01);
    }
    return 0;
}
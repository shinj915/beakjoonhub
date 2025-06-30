#include <stdio.h>
#include <ctype.h>

int main()
{
    char    word[101];
    int     i = 0;
    
    scanf("%s", &word[0]);
    while(word[i] != 0)
    {
        if (islower(word[i]))
            printf("%c", toupper(word[i]));
        if (isupper(word[i]))
            printf("%c", tolower(word[i]));
        i++;
    }
    return 0;
}
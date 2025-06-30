#include <stdio.h>
#include <string.h>

int    main()
{
	char word[101];
    int len;
	scanf("%s", word);
    
    len = strlen(word);

	int i = 0;
	while (i < len - 1) {
		if (word[i] != word[len - 1])
        {
            printf("0");
            return 0;
        }
		i++;
		len--;
	}
	printf("1");
	return 0;
}
#include <stdio.h>

int    main()
{
	int len;
	
	scanf("%d", &len);
	char st[len];

	scanf("%s", st);

	int i = 0;
	int count = 0;
	while (i < len - 1) {
		if (st[i] != st[len - 1])
			count++;
		i++;
		len--;
	}
	printf("%d", count);
}
#include <stdio.h>

int    main()
{
    int	bottle[6];
	int sum = 0;

	for (int i = 0; i < 6; i++)
	{
		scanf("%d", &bottle[i]);
		sum += bottle[i];
	}
	printf("%d", sum * 5);
    return (0);
}
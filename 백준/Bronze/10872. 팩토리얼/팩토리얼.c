#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	if (n == 0 || n == 1)
	{
		printf("%d", 1);
		return (0);
	}
	for (int i = n - 1; i > 0; i--)
	n *= i;
	printf("%d", n);
	return (0);
}
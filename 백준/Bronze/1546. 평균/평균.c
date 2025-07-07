#include <stdio.h>

int main(void)
{
	int sum = 0;
	int m = 0;
	int n, input;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &input);
		sum += input;
		if (input > m)
			m = input;
	}
	printf("%f", (float)sum / m * 100 / n);

	return (0);
}
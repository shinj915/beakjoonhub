#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	int **a = (int **)malloc(sizeof(int *) * n);
	for (int i = 0; i < n; i++)
	{
		a[i] = (int *)malloc(sizeof(int) * m);
		for (int j = 0; j < m; j++)
			scanf("%d", &a[i][j]);
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int b = 0;
			scanf("%d", &b);
			a[i][j] += b;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	return (0);
}
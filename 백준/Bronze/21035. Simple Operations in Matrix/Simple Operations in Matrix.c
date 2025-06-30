#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	int n, m;
	scanf("%d %d", &n, &m);

	int **matrix = (int **)malloc(sizeof(int *) * n);
	for (int i = 0; i < n; i++)
		matrix[i] = (int *)malloc(sizeof(int) * m);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			scanf("%d", &matrix[i][j]);
	}

	int q;
	scanf("%d", &q);

	while(q--)
	{
		char axis[4] = { 0, };
		int k, val;
		scanf("%s %d %d", axis, &k, &val);
		if (strcmp(axis, "col") == 0)
		{
			for (int i = 0; i < n; i++)
				 matrix[i][k - 1] += val;
		}
		else if (strcmp(axis, "row") == 0)
		{
			for (int j = 0; j < m; j++)
				matrix[k - 1][j] += val;
		}
	}

	int min = 200;
	int max = -200;
	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (matrix[i][j] > max)
				max = matrix[i][j];
			if (matrix[i][j] < min)
				min = matrix[i][j];
			sum += matrix[i][j];
		}
	}
	printf("%d %d %d", sum, min, max);
	return (0);
}
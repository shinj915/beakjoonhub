#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int t, w, h, n;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%d %d %d", &h, &w, &n);
		int **hotel = (int **)malloc(sizeof(int *) * h);
		for (int i = 0; i < h; i++)
		{
			hotel[i] = (int *)malloc(sizeof(int) * w);
			for (int j = 0; j < w; j++)
				hotel[i][j] = (i + 1) * 100 + (j + 1);
		}
		printf("%d\n", (n % h? n % h : h) * 100 + n / h + (n % h? 1 : 0));
	}
	return (0);
}
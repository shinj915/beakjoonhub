#include <stdio.h>
#include <strings.h>

int main()
{
	int t, n;
	float h[1000];
	float aver = 0;
	scanf("%d", &t);
	for (int i = 0; i < t; i++)
	{
		bzero(h, 1000);
		scanf("%d", &n);
		for (int j = 0; j < n; j++)
			scanf("%f", &h[j]);
		for (int k = 1; k < n - 1; k++)
		{
			aver = (h[k - 1] + h[k + 1]) / 2;
			if (h[k] > aver)
				h[k] = aver;
		}
		printf("Case #%d: %.6f\n", i + 1, h[n - 2]);
	}
	return 0;
}
#include <stdio.h>

int main(void)
{
	int n;
	
	scanf("%d", &n);

	int start = 1;
	int end = 1;
	int count = 1;
	int sum = 1;
	while (end != n)
	{
		if (sum < n)
		{
			end++;
			sum += end;
		}
		else if (sum == n)
		{
			end++;
			sum += end;
			count++;
		}
		else if (sum > n)
		{
			sum -= start;
			start++;
		}
	}
	printf("%d", count);
	return 0;
}
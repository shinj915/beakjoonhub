#include <stdio.h>
#include <math.h>

int main(void)
{
	int tiles;
	scanf("%d", &tiles);

	printf("The largest square has side length %d.", (int)sqrt(tiles));
	return (0);
}
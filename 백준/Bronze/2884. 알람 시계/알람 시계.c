#include <stdio.h>

int main() {
	int h, m;
	scanf("%d %d", &h, &m);
	if (m >= 45)
		printf("%d %d\n", h, m - 45);
	else
	{
		if (h == 0)
			h = 24;
		printf("%d %d\n", h - 1, 60 - (45 - m));
	}
}
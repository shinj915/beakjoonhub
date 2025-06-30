#include <stdio.h>

int main() {
	int h = 1946;
	int y;
	scanf("%d", &y);
	if(y > 1945 && y < 1000001) {
		printf("%d", y - h);
	}
	return 0;
}
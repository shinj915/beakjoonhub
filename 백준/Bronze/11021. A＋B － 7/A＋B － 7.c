#include <stdio.h>

int main() {
int a, b;
	int count;
	scanf("%d", &count);
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i+1, a+b);
	}
}
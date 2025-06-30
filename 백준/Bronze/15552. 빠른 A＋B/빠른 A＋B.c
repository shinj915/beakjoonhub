#include <stdio.h>

int main() {
int a, b;
	int count;
	scanf("%d", &count);
	int *result = (int *)malloc(sizeof(int)*count);
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &a, &b);
		result[i] = a + b;
	}
	for (int i = 0; i < count; i++) {;
		printf("%d\n", result[i]);
	}
}
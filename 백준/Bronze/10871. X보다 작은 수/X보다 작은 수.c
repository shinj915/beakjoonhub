#include <stdio.h>

int main() {
    int n, x;
	scanf("%d %d", &n, &x);
	int *a = (int *)malloc(sizeof(int)*n);
	int *b = (int *)malloc(sizeof(int)*n);
	int index_b = 0;
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
		if (a[i] < x) {
			b[index_b] = a[i];
			index_b++;
		}
	}
	for (int i = 0; i<index_b; i++) {
		printf("%d ", b[i]);
	}
}
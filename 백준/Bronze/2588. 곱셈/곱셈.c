#include <stdio.h>

int main() {
    int a, b;
	scanf("%d", &a);
	scanf("%d", &b);

	int i = b % 10;
	int A1 = a * i;
	printf("%d\n", A1);

	int j = b % 100 - i;
	int A2 = a * j;
	printf("%d\n", A2/10);

	int k = b - j - i;
	int A3 = a * k;
	printf("%d\n", A3/100);

	printf("%d\n", A1 + A2 + A3);
}
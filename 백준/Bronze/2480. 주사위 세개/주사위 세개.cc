#include <stdio.h>

int main() {
	int a, b, c, m, h;
	scanf("%d %d %d", &a, &b, &c);
	if (a == b && b == c) {
		m = 10000 + a * 1000;
	}
	else if (a == b || b == c) {
		h = b;
		m = 1000 + h * 100;
	}
	else if (a == c) {
		h = a;
		m = 1000 + h * 100;
	}
	else {
		if (a > b && a > c) {
			h = a;
		}
		if (b > a && b > c) {
			h = b;
		}
		if (c > a && c > b) {
			h = c;
		}
		m = h * 100;
	}
	printf("%d", m);
	return 0;
}
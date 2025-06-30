#include <stdio.h>

int main() {
	int h, m, t;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	if (t > 59) {
		do {
			h += 1;
			t -= 60;
		} while (t > 60);
	}
	m += t;
	if (m > 59) {
		h += 1;
		m -= 60;
	}
	if (h > 23) {
		h -= 24;
	}
	printf("%d %d", h, m);
	return 0;
}
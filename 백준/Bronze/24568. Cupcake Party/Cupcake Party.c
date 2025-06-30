#include <stdio.h>

int main() {
	unsigned int r, s, cake;
	scanf("%u", &r);
	scanf("%u", &s);
	r *= 8;
	s *= 3;
	cake = r + s - 28;
	printf("%u", cake);
}
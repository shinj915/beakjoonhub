#include <stdio.h>

int main() {
	//가격 대비 성능 = 성능 / 가격
	unsigned int a, b, c, d, e;
	scanf("%u %u %u", &a, &b, &c);
	if (a<1001 && b<1001 && c<1001) {
		//10 100 7
		d = b / a;
		e = 3 * d * c;
	}
	printf("%u", e);
	return 0;
}
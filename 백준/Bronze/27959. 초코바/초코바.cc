#include <stdio.h>

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	if(0<n && n<101 && 0<m && m<10001) {
		n *= 100;
		if(n > m-1) 
			printf("Yes");
		else
			printf("No");
	}
	return 0;
}
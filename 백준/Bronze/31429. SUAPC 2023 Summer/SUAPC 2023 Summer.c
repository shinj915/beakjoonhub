#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if(n < 1 || n > 11){
		return 0;
	}
	switch(n){
		case 1:
			printf("12 1600");
			break;
		case 2:
			printf("11 894");
			break;
		case 3:
			printf("11 1327");
			break;
		case 4:
			printf("10 1311");
			break;
		case 5:
			printf("9 1004");
			break;
		case 6:
			printf("9 1178");
			break;
		case 7:
			printf("9 1357");
			break;
		case 8:
			printf("8 837");
			break;
		case 9:
			printf("7 1055");
			break;
		case 10:
			printf("6 556");
			break;
		case 11:
			printf("6 773");
			break;
	}
	return 0;
}
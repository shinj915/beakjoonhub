#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    for(int i = a; i > 0; i--) {
        for(int j = 1; j <= a; j++) {
            if(j < i) {
                printf(" ");
            }
            else  {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
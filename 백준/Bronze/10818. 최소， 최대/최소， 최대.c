#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    int *c = malloc(sizeof(int)*a);
    for(int i=0; i<a ; i++) {
        scanf("%d", &b);
        c[i] = b;
    }
    int min = c[0];
    int max = c[0];
    for(int i=1; i<a ; i++) {
        if(c[i] < min){
            min = c[i];
        }
        if(c[i] > max){
            max = c[i];
        }
    }
    printf("%d %d", min, max);
}
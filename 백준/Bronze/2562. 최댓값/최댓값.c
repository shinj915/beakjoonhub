#include <stdio.h>

int main() {
    int a[9], count;
    for(int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
    }
    int max = a[0];
    for(int i = 1; i < 9; i++) {
        if(a[i] > max){
            max = a[i];
        }
    }
    for(int i = 0; i < 9; i++) {
        if(a[i] == max){
            count = i+1;
        }
    }
    printf("%d\n%d", max, count);
}
# include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (b < c) {
            if (c < a)
                printf("%d\n", c);
            else printf("%d\n", a);
        }
        else printf("%d\n", b);
    }
    else { // a < b, a==b
        if (b > c) {
            if (c < a) printf("%d\n", a);
            else printf("%d\n", c);
        }
        else printf("%d\n", b);
    }
}
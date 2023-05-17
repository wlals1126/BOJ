#include <stdio.h>
int main() {
	int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a > b) {
        if (a > c) {
            if (b > c) {
                printf("%d", b);
            }
            else {
                printf("%d", c);
            }
        }
        else {
            if (c > b) {
                printf("%d", a);
            }
        }
    }
    else if ( b > a ) {
        if (b > c) {
            if (c > a) {
                printf("%d", c);
            }
            else {
                printf("%d", a);
            }
        }
        else {
            if (c > a) {
                printf("%d", b);
            }
        }
    }
    else if (a == b || b == c || c == a) {
        printf("%d", a);
    }
}

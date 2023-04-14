#include <stdio.h>
int main() {
	int n, a, b;
	int temp = 0;
	scanf("%d", &n);
	if((n < 5) && (n % 2 == 1)) {
		printf("-1");
	}
	else if((n % 5) % 2 == 0) {
		temp = n % 5;
		a = n / 5;
		b = temp / 2;
		printf("%d", a + b);
	}
	else {
		temp = n % 5;
		a = n / 5;
		b = (temp + 5) / 2;
		printf("%d", a -1 + b);
	}
}
#include <stdio.h>
int main() {
	int n, m;
	int res1 = 0, res2 = 0;
	scanf("%d %d", &n, &m);
	res1 = (n / 100) + (n / 10 % 10 * 10) + (n % 10 * 100);
    res2 = (m / 100) + (m / 10 % 10 * 10) + (m % 10 * 100);
    if(res1 > res2) {
    	printf("%d", res1);
	}else {
		printf("%d", res2);
	}
}
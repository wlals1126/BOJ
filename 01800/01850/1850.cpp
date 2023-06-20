#include <stdio.h>
long long gcd(long long a, long long b) {
	if(a%b == 0)
		return b;
	return gcd(b, a%b);
}
int main() {
	long long a, b;
	long long res = 0;
	scanf("%lld %lld", &a, &b);
	res = gcd(a, b);
	for(int i = 0; i < res; i++)
		printf("1");
	printf("\n");
}
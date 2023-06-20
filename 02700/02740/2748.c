#include <stdio.h>

long long int arr[90];
long long int fibo(long long int n) {
	if(n == 1 || n == 2)
		return 1;
	if(arr[n] != 0)
		return arr[n];
	else 
		arr[n] = fibo(n-1) + fibo(n-2);
	return arr[n];
}

int main() {
	long long int x;
	scanf("%lld", &x);
	printf("%lld", fibo(x));
}


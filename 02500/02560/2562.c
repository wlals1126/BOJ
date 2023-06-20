#include <stdio.h>
int arr[10000001];
int main() {
	int n;
	int max = 0, sum = 0;
	for(int i = 1; i < 10; i++) {
		scanf("%d", &n);
		if(n > max) {
			max = n;
			sum = i;
		}
	}
	printf("%d\n%d\n", max, sum);
	return 0;
}
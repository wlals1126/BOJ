#include <stdio.h>
int arr[10];
int main() {
	int n, i, j;
	int max = 0, sum, res = 0;
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= 5; j++) {
			scanf("%d", &arr[j]);
		}
		sum = 0;
		if((arr[1] + arr[2] + arr[3]) % 10 >= sum) {
			sum = (arr[1] + arr[2] + arr[3]) % 10;
		}
		if((arr[1] + arr[2] + arr[4]) % 10 >= sum) {
			sum = (arr[1] + arr[2] + arr[4]) % 10;
		}
		if((arr[1] + arr[2] + arr[5]) % 10 >= sum) {
			sum = (arr[1] + arr[2] + arr[5]) % 10;
		}
		if((arr[1] + arr[3] + arr[4]) % 10 >= sum) {
			sum = (arr[1] + arr[3] + arr[4]) % 10;
		}
		if((arr[1] + arr[3] + arr[5]) % 10 >= sum) {
			sum = (arr[1] + arr[3] + arr[5]) % 10;
		}
		if((arr[1] + arr[4] + arr[5]) % 10 >= sum) {
			sum = (arr[1] + arr[4] + arr[5]) % 10;
		}
		if((arr[2] + arr[3] + arr[4]) % 10 >= sum) {
			sum = (arr[2] + arr[3] + arr[4]) % 10;
		}
		if((arr[2] + arr[3] + arr[5]) % 10 >= sum) {
			sum = (arr[2] + arr[3] + arr[5]) % 10;
		}
		if((arr[2] + arr[4] + arr[5]) % 10 >= sum) {
			sum = (arr[2] + arr[4] + arr[5]) % 10;
		}
		if((arr[3] + arr[4] + arr[5]) % 10 >= sum) {
			sum = (arr[3] + arr[4] + arr[5]) % 10;
		}
		if(sum >= max) {
			max = sum;
			res = i;
		}
	}
	printf("%d", res);
}
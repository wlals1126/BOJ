#include <stdio.h>
#include <stdlib.h>
int main() {
	int n, k, i;
	long long max = 0, max2 = 0, cnt;
	long long * arr;
	scanf("%d %d", &k, &n);
	arr = (long long *)calloc(k, sizeof(long long));
	for(i = 0; i < k; i++) {
		scanf("%lld", &arr[i]);
		if(max < arr[i]) {
			max = arr[i];
		}
	}
	long long left = 1, right = max, mid;
	while(left <= right) {
		mid = (left + right) / 2;
		cnt = 0;
		for(i = 0; i < k; i++) {
			cnt += arr[i] / mid;
		}
		if(cnt >= n) {
			left = mid + 1;
			if(max2 < mid)
				max2 = mid;
		}
		else
			right = mid - 1;
	}
	printf("%lld", max2);
}
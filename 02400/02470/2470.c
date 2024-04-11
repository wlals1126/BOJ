#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int arr[100001];
int n;
int compare(const void *first, const void *second) {
	if(*(int*)first < *(int*)second)
		return -1;
	if(*(int*)first > *(int*)second)
		return 1;
	else 
		return 0;
}
void Tp() {
	int left = 0, right = n - 1;
	int a, b;
	int sum2 = 2050000000;
	int sum;
	for(int i = 0; i < n; i++) {
	while(left < right) {
		sum = arr[left] + arr[right];
		if(sum2 > abs(sum)) {
			sum2 = abs(sum);
			a = arr[left];
			b = arr[right];
	 }
		if(sum < 0) 
			left++;
		else if(sum > 0) 
			right--;
		else 
			break;
		}
	}
	printf("%d %d\n", a, b);
}
int main() {
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), compare);
	Tp();
}
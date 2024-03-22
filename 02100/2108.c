#include <stdio.h>	
#include <stdlib.h>
#include <math.h>
int arr[5000000];
int brr[1000000];
int compare(const void *first, const void *second) {
	if(*(int*)first < *(int*)second)
		return -1;
	if(*(int*)first > *(int*)second)
		return 1;
	else 
		return 0;
}
int main() {
	int n, sum = 0, max = 0, temp = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		brr[arr[i] + 4000]++;
	}
	qsort(arr, n, sizeof(int), compare);
	for(int i = 0; i < 8001; i++) {
		if(brr[i] > max) {
			max = brr[i];
			temp = i;
		}
	}
	for(int i = temp + 1; i < 8001; i++) {
		if(brr[i] == max) {
			temp = i; break;
		}
	}
	int a = round(double(sum) / n);
	int b = arr[(n-1)/2];
	int c = temp - 4000;
	int d = arr[n-1] - arr[0];
	printf("%d\n%d\n%d\n%d\n", a, b, c, d);
}
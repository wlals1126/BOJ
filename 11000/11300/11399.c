#include <stdio.h>	
#include <stdlib.h>
int arr[1000001];
int compare(const void *first, const void *second) {
	if(*(int*)first < *(int*)second)
		return -1;
	if(*(int*)first > *(int*)second)
		return 1;
	else 
		return 0;
}
int main() {
	int n, sum = 0, tmp = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr, n, sizeof(int), compare);
	for(int i = 0; i < n; i++) {
		sum += arr[i];
		tmp += sum;
	}
	printf("%d", tmp);
}
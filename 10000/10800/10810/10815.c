#include <stdio.h>
#include <stdlib.h>
int *arr1, *brr;
int compare(const void *first, const void *second) {
	if(*(int*)first < *(int*)second)
		return -1;
	if(*(int*)first > *(int*)second)
		return 1;
	else 
		return 0;
}
int binsearch(const int arr[], int key, int size) {
	int left = 0, mid, right = size;
	while(1) {
		mid = (left + right) / 2;
		if(arr[mid] == key) {
			return 1; 
		}
		else if(arr[left] == key)
			return 1;
		else if(arr[right] == key)
			return 1;
		if(arr[mid] < key) {
			left = mid + 1;
		}
		else if(arr[mid] > key){
			right = mid - 1;
		}
		if(right <= left)
			return 0;
	}
}
int main() {
	int n, m;
	scanf("%d", &n);
	arr1 = (int*)calloc(n, sizeof(int));
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	scanf("%d", &m);
	brr = (int*)calloc(m, sizeof(int));
	for(int i = 0; i < m; i++) {
		scanf("%d", &brr[i]);
	}
	qsort(arr1, n, sizeof(int), compare);
	for(int i = 0; i < m; i++) {
		printf("%d ", binsearch(arr1, brr[i], n));
	}
	free(arr1), free(brr);
}
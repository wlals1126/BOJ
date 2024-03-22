#include <stdio.h>
#include <stdlib.h>
int arr[100001], brr[100001], Chk[100001];
int compare(const void *first, const void *second) {
	if(*(int*)first < *(int*)second)
		return -1;
	if(*(int*)first > *(int*)second)
		return 1;
	else 
		return 0;
}
int binsearch(int arr[], int key, int size) {
	int left = 0, mid, right = size-1;
	while(1) {
		mid = (left + right) / 2;
		if(arr[mid] == key) {
			return 1;
		}
		else if(arr[left] == key) {
			return 1;
		}
		else if(arr[right] == key) {
			return 1;
		}
		
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
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for(int i = 0; i < m; i++) {
		scanf("%d", &brr[i]);
	}
	qsort(arr, n, sizeof(int), compare);
	for(int i = 0; i < m; i++) {
		printf("%d\n", binsearch(arr, brr[i], n));
	}
	
	return 0;
}
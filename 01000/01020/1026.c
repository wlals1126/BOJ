#include <stdio.h>
#include <stdlib.h>
int arr[101];
int brr[101];
int compare(const void *first, const void *second) {
   if(*(int*)first < *(int*)second)
      return 1;
   if(*(int*)first > *(int*)second)
      return -1;
   else 
      return 0;
}
int main() {
	int n;
	int sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}	
	for(int i = 0; i < n; i++) {
	scanf("%d", &brr[i]);
	}	
	qsort(arr, n, sizeof(int), compare);
	qsort(brr, n, sizeof(int), compare);
	for(int i = 0; i < n; i++) {
		sum += arr[i] * brr[n-i-1];
	}
	printf("%d", sum);
}
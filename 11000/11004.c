#include <stdio.h>	
#include <stdlib.h>
int arr[5000000];
int compare(const void *first, const void *second) {
	if(*(int*)first < *(int*)second)
		return -1;
	if(*(int*)first > *(int*)second)
		return 1;
	else 
		return 0;
}
int main() {
	int a, b;

	int temp = 0;
	scanf("%d %d", &a, &b);
	for(int i = 1; i <= a; i++) {
		scanf("%d", &arr[i]);
	}
	qsort(arr+1, a, sizeof(int), compare);
	printf("%d", arr[b]);
}
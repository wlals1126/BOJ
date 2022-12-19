#include <stdio.h>
#include <stdlib.h>	
typedef struct {
	int x;
	int y;
}point;
point sort[100001];
void merge(point* arr, int first, int mid, int last) {
	int i, j, k;
	i = first;
	j = mid + 1;
	k = first;
	while(i <= mid && j <= last) {
		if(arr[i].y < arr[j].y)
			sort[k++] = arr[i++];
		else if(arr[i].y > arr[j].y)
			sort[k++] = arr[j++];
		else {
			if(arr[i].x < arr[j].x)
				sort[k++] = arr[i++];
			else if(arr[i].x > arr[j].x)
				sort[k++] = arr[j++];
		}
	}
	if(i <= mid) {
		while(i <= mid)
			sort[k++] = arr[i++];
	}
	else {
		while(j <= last)
			sort[k++] = arr[j++];
	}
	for(k = first; k <= last; k++) {
		arr[k] = sort[k];
	}
}
void mergesort(point* arr, int first, int last) {
	if(first < last) {
		int mid = (first + last)/2;
		mergesort(arr, first, mid);
		mergesort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	point* arr = (point*)malloc(sizeof(point)*n);
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	mergesort(arr, 0, n-1);
	for(int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].x, arr[i].y);
	}
	return 0;
}
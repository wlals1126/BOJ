#include <stdio.h>
int main() {
	int arr[101] = {0};
	int sum = 0, avg = 0, temp = 0;
	int n = 5;
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n - 1 - i; j++) {
			if(arr[j] < arr[j+1]) {
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	avg = (sum) / n;
	printf("%d\n%d", (int)avg, (int)arr[(n/2)]);
}
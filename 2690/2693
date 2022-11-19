#include <stdio.h>
int main() {
	int n, temp = 0;
	scanf("%d", &n);
	int arr[n][10];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 10; j++) {
			scanf("%d", &arr[i][j]);
		}
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < 10; j++) {
			for(int k = 0; k < 10-j-1; k++) {
				if(arr[i][k] < arr[i][k+1]) {
					temp = arr[i][k];
					arr[i][k] = arr[i][k+1];
					arr[i][k+1] = temp;
				}
			}
		}
	}
	for(int i = 0; i < n; i++) {
		printf("%d\n", arr[i][2]);
	}
	return 0;
}
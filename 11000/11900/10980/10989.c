#include <stdio.h>
int arr[10001;
int main() {
	int n;
	int num;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d", &num);
		arr[num-1]++;
	}
	for(int i = 0; i < 10000; i++) {
		if(arr[i] != 0) {
			for(int j = 0; j < arr[i]; j++) {
				printf("%d\n", i+1);
			}
		}
	}
	return 0;
}
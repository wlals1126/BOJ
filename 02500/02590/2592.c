#include <stdio.h>
#include <math.h>
int main() {
	int arr[1001] = {0};
	int sum = 0, avg = 0, mode = 0, cnt = 0, oldmode = 0;
	for(int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	int oldcnt = 0;
	for(int i = 0; i < 10; i++) {
		mode = arr[i];
		cnt = 1;
		for(int j = i + 1; j < 10; j++) {
			if(mode == arr[j]) {
				cnt++;
			}
		}
		if(cnt > oldcnt) {
			oldmode = mode;
			oldcnt = cnt;
		}
	}
	avg = (sum)/10;
	printf("%d\n%d", avg, oldmode);
}
#include<stdio.h>

int main() {
	int n, m;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		int arr[1000], sum = 0;
		double avg;
		for (int j = 0; j < m; j++) {
			scanf("%d", &arr[j]);
			sum += arr[j];
		}
		avg = (double)sum / m;
		int cnt = 0;
		for (int j = 0; j < m; j++) {
			if (avg < arr[j])
				cnt++;
		}
		printf("%.3f%%\n", (double)cnt * 100 / m);
	}
	return 0;
}
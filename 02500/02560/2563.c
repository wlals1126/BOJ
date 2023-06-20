#include <stdio.h>
int arr[100][100];
int main() {
	int n, res = 0;
	int w, h;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d %d", &w, &h);
		for(int j = w; j < w+10; j++) {
			for(int k = h; k < h+10; k++) {
				if(!arr[j][k]) {
					res++;
					arr[j][k] = 1;	
				}
			}
		}
	}
	printf("%d", res);
}
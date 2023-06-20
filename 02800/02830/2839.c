#include <stdio.h>
int main() {
	int n;
	int temp = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
		if(n % 5 == 0) {
			n -= 5;
			temp++;
		}
		else if(n % 3 == 0) {
			n -= 3;
			temp++;
		}
		else if(n > 5) {
			n -= 5;
			temp++;
		}
		else {
			temp = -1;
			break;
		}
	}
}
	printf("%d", temp);
}
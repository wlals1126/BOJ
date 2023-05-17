#include <stdio.h>
#include <string.h>
int main() {
	int n, sum = 0;
	char str[100];
	int arr[100];
	scanf("%d", &n);
	scanf("%s", str, sizeof(str));
	for(int i = 0; i < n; i++) {
		arr[i] = str[i] - '0';
		sum += arr[i];
	}
	printf("%d", sum);
}
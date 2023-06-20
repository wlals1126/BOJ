#include <iostream>
using namespace std;
int arr[1001];
int prime(int n, int k) {
	for(int i = 2; i <= n; i++) {
		arr[i] = i;
	}
	for(int i = 2; i <= n; i++) {
		if(arr[i] == 0)
			continue;
		for(int j = i; j <= n; j+=i) {
			if(arr[j] != 0) {
				arr[j] = 0;
				k--;
				if(k == 0) {
					printf("%d", j);
					return 0;
				}
			}
		}
	}
}
int main() {
	int n, k;
	cin >> n >> k;
	prime(n, k);
}
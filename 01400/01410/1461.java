#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int arr[100001];
int main() {
	int n, m;
	int cnt = 0, ans = 0;
	scanf("%d %d", &n, &m);
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if(arr[i] < 0) {
			cnt++;
		}
	}
	sort(arr, arr + n);
	for(int i = n - 1; i >= cnt; i -= m) {
		ans += (arr[i]*2);
	}
	for(int i = 0; i < cnt; i += m) {
		ans += abs(arr[i] * 2);
	}
	ans -= max(abs(arr[0]), abs(arr[n-1]));
	printf("%d", ans);
}
#include <iostream>
#include <algorithm>
using namespace std;
int arr[100000];
int main() {
	int n, m;
	int start, end;
	int ans = 0;
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + n);
	start = 0, end = n - 1;
	while(start < end) {
		if(arr[start] + arr[end] == m) {
			ans++;
			end--;
			start++;
		}
		if(arr[start] + arr[end] > m) {
			end--;
		}
		if(arr[start] + arr[end] < m) {
			start++;
		}
	}
	cout << ans;
}
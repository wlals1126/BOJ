#include <iostream>
using namespace std;
int arr[1000001];
int n, m;
int main() {
	cin >> n >> m;
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	int cnt = 0;
	int left = 0, right = 0;
	int sum = 0;
	while(right <= n) {
		if(sum < m) {
			sum += arr[right];
			right++;
		}
		if(sum >= m) {
			if(sum == m) {
				cnt++;
			}
			sum -= arr[left];
			left++;
		}
	}
	cout << cnt;
}
#include <iostream>
#include <algorithm>
using namespace std;
int arr[10000001];
int main() {
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr, arr+n);
	for(int i = n-1; i > 1; i--) {
		int a = arr[i];
		int b = arr[i-1];
		int c = arr[i-2];
		if(a < b + c) {
			cout << a + b + c;
			return 0;
		}
	}
	cout << -1;
}
#include <iostream>
using namespace std;
int main() {
	int arr[100001];
	int max[100001];
	int min[100001];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		max[i] = 1;
		min[i] = 1;
		cin >> arr[i];
	}
	int length = 1;
	for(int i = 1; i < n; i++) {
		if(arr[i] >= arr[i-1])
			max[i] = max[i-1] + 1;
		if(max[i] > length)
			length = max[i];
	}
	for(int i = 1; i < n; i++) {
		if(arr[i] <= arr[i-1])
			min[i] = min[i-1] + 1;
		if(min[i] > length)
			length = min[i];
	}
	cout << length;
}
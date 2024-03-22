#include<iostream>
using namespace std;
int arr[10];
int factorial(int n) {
	if (n == 1 || n == 0) 
		return 1;
	else {
		if (arr[n] > 0) 
			return arr[n];
		arr[n] = n * factorial(n - 1);
		return n * factorial(n - 1);
	}
}

int binomial_coefficient(int n, int k) {
	if (k < 0) 
		return 0;
	if (k > n) 
		return 0;
	return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << binomial_coefficient(n, k) << "\n";
}
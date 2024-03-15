#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* str = new int[n];
	for(int i = 0; i < n; i++)
		cin >> str[i];
	if(next_permutation(str, str + n)) {
		for(int i = 0; i < n; i++)
			cout << str[i] << " ";
	}
	else 
		cout << "-1";
}
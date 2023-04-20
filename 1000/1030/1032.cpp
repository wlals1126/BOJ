#include <iostream>
#include <string>
using namespace std;
int main() {
	int n;
	cin >> n;
	
	string str;
	cin >> str;
	string res = str;
	
	for(int i = 1; i < n; i++) {
		string str2;
		cin >> str2;
		for(int j = 0; j < str2.length(); j++) {
			if(str2[j] != res[j]) {
				res[j] = '?';
			}
		}
	}
	cout << res;
	return 0;
}
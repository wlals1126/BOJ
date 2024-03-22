#include <iostream>
#include <string>
using namespace std;
int main() {
	string n, m, sum; 
	cin >> n >> m;

	int up = 0; 
	int len1 = n.length();  
	int len2 = m.length();

	while (len1 > 0 || len2 > 0) {
		int nn1 = 0;  
		if (len1 > 0)
			nn1 = n[--len1] - '0'; 
		int nn2 = 0;
		if (len2 > 0)
			nn2 = m[--len2] - '0';

		int temp = nn1 + nn2 + up;

		up = temp / 10; 
		temp %= 10;
		char ch = temp + '0';  

		sum += ch;
	}	
	if (up > 0)
		sum += up + '0';
	for (int i = sum.length() - 1; i >= 0; i--) 
		cout << sum[i];
}
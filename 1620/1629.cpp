#include <iostream>
using namespace std;
long long multiple(long long a, long long b, long long c) {
	if(b == 0)
		return 1;
	if(b == 1)
		return a % c;
	long long temp = multiple(a, b/2, c);
	if(b % 2 == 0)
		return temp * temp % c;
	else
		return (temp * temp % c) * a % c;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << multiple(a, b, c);
}
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
struct member {
	char name[11];
	int k, e, m;
}member[100001];
bool compare(struct member a, struct member b) {
	if(a.k == b.k) {
		if(a.e == b.e) {
			if(a.m == b.m) {
				if(strcmp(a.name, b.name) < 0)
					return true;
				else
					return false;
			}else
				return a.m > b.m;
		}else 
			return a.e < b.e;
	}else
		return a.k > b.k;
}
int main() {
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cin >> member[i].name >> member[i].k >> member[i].e >> member[i].m;
	}
	sort(member, member + n, compare);
	for(int i = 0; i < n; i++) {
		cout << member[i].name << "\n";
	}
}
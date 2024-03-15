#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;
char str[100001];
int n;
int main() {
	int temp = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%s", str);
		stack<char> str2;
		int len = strlen(str);
		for(int j = 0 ; j < len; j++) {
			if(!str2.empty() && str2.top() == str[j])
				str2.pop();
			else 
				str2.push(str[j]);
		}
		if(str2.empty())
			temp ++;
	}
	printf("%d", temp);
	return 0;
}
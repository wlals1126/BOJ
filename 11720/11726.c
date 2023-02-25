#include <stdio.h>
int dp[1001];
int bottomup(int x) {
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i <= x; i++)
		dp[i] = (dp[i-1] + dp[i-2]) % 10007;
	return dp[x];
}
int main() {
	int n;
	scanf("%d", &n);
	printf("%d", bottomup(n));
}
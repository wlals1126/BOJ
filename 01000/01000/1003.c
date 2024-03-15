#include <stdio.h>
int fibo(int n) {
	int dp[41];
	dp[0] = 0, dp[1] = 1;
	for(int i = 2; i <= n; i++)
		dp[i] = dp[i - 1] + dp[i - 2];
	return dp[n];
}
int main() {
	int num, m;
	scanf("%d", &num);
	for(int i = 0; i < num; i++) {
		scanf("%d", &m);
		if(m == 0)
			printf("%d %d\n", 1, 0);
		else if(m == 1)
			printf("%d %d\n", 0, 1);
		else 
			printf("%d %d\n", fibo(m - 1), fibo(m));
	}
	return 0;
}
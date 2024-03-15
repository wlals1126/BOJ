#include <iostream>
#include <vector>
using namespace std;

vector<int> coins;
vector<int> dp;

int main() {
    int n, k;
    cin >> n >> k;

    coins.resize(n);
    dp.resize(k + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        for (int j = coins[i]; j <= k; ++j) {
            dp[j] += dp[j - coins[i]];
        }
    }

    cout << dp[k] << endl;
}

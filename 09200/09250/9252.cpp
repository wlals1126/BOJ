#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    int n1 = s1.size();
    int n2 = s2.size();

    vector<vector<int>> dp(n1 + 1, vector<int>(n2 + 1, 0));
    vector<vector<char>> direction(n1 + 1, vector<char>(n2 + 1, 0));

    for (int i = 1; i <= n1; ++i) {
        for (int j = 1; j <= n2; ++j) {
            if (s1[i - 1] == s2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                direction[i][j] = '\\';
            } else {
                if (dp[i - 1][j] > dp[i][j - 1]) {
                    dp[i][j] = dp[i - 1][j];
                    direction[i][j] = '|';
                } else {
                    dp[i][j] = dp[i][j - 1];
                    direction[i][j] = '-';
                }
            }
        }
    }

    cout << dp[n1][n2] << '\n';

    string lcs;
    int i = n1, j = n2;
    while (i > 0 && j > 0) {
        if (direction[i][j] == '\\') {
            lcs += s1[i - 1];
            --i;
            --j;
        } else if (direction[i][j] == '|') {
            --i;
        } else {
            --j;
        }
    }
    reverse(lcs.begin(), lcs.end());
    cout << lcs << '\n';

    return 0;
}

#include<iostream>
#include<algorithm>
using namespace std;

int DP[1001][1001] = { 0, };
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string strFirst, strSecond;
    cin >> strFirst >> strSecond;

    for (int i = 1; i <= strFirst.size(); ++i) {
        for (int j = 1; j <= strSecond.size(); ++j) {
            if (strFirst[i - 1] == strSecond[j - 1]) {
                DP[i][j] = DP[i - 1][j - 1] + 1;
            } else {
                DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
            }
        }
    }

    cout << DP[strFirst.size()][strSecond.size()] << '\n';
    return 0;
}

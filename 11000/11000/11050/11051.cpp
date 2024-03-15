#include <iostream>
using namespace std;

const int MOD = 10007;
int n, k;
int arr[1007][1007];

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n >> k;
    
    for (int i = 0; i <= 1000; i++) {
        arr[i][1] = i;
        arr[i][i] = 1;
        arr[i][0] = 1;
    }
    
    for (int i = 2; i <= 1000; i++) {
        for (int j = 1; j < i; j++) {
            arr[i][j] = (arr[i-1][j-1] % MOD + arr[i-1][j] % MOD) % MOD;
        }
    }
    
    cout << arr[n][k];
    return 0;
}

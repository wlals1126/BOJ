#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long cnt = 0;
    long long prefixSum = 0;
    unordered_map<int, int> um;
    um[0] = 1;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        prefixSum += num;
        int remainder = (prefixSum % m + m) % m;
        cnt += um[remainder];
        um[remainder]++;
    }

    cout << cnt << endl;

    return 0;
}

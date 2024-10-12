#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr1(101, 0);
    vector<int> arr2(101, 0);

    int prev = 0;
    for (int i = 0; i < n; i++) {
        int length, speed;
        cin >> length >> speed;

        for (int j = prev + 1; j <= length + prev; j++) {
            arr1[j] = speed;
        }

        prev += length;
    }

    prev = 0;
    for (int i = 0; i < m; i++) {
        int length, speed;
        cin >> length >> speed;

        for (int j = prev + 1; j <= length + prev; j++) {
            arr2[j] = speed;
        }

        prev += length;
    }

    int maxDiff = 0;
    for (int i = 0; i < 101; i++) {
        maxDiff = max(maxDiff, arr2[i] - arr1[i]);
    }

    cout << maxDiff << endl;

    return 0;
}

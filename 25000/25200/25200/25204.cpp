#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compareStrings(const string &a, const string &b) {
    if (a.rfind(b, 0) == 0) return false;
    if (b.rfind(a, 0) == 0) return true;

    int idx = 0;
    while (a[idx] == b[idx]) idx++;

    if (a[idx] == '-') return false;
    if (b[idx] == '-') return true;

    if (tolower(a[idx]) == tolower(b[idx])) {
        return islower(a[idx]) < islower(b[idx]);
    }
    return tolower(a[idx]) < tolower(b[idx]);
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<string> arr(N);

        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), compareStrings);

        for (const auto &str : arr) {
            cout << str << "\n";
        }
    }
    return 0;
}

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() {
    int n, k, cnt = 0;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    for (int i = n - 1; i > 0; --i) {
        int m = 0, idx = 0;
        for (int j = 0; j <= i; ++j) {
            if (m < a[j]) {
                m = a[j];
                idx = j;
            }
        }
        if (a[i] != m) {
            swap(a[i], a[idx]);
            cnt++;
            if (cnt == k) {
                cout << min(a[i], a[idx]) << " " << max(a[i], a[idx]) << endl;
                return 0;
            }
        }
    }
    
    if (cnt < k) {
        cout << "-1" << endl;
    }
    
    return 0;
}

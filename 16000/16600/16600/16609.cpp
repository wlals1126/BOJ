#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> c(n);

    for (int i = 0; i < n; ++i) {
        cin >> c[i];
    }

    sort(c.begin(), c.end());

    for (int i = 0; i < n; ++i) {
        if (c[i] > i + 1) {
            cout << "impossible" << endl;
            return 0;
        }
    }

    double f = 1.0;
    for (int i = 0; i < n; ++i) {
        f = min(f, (double)c[i] / (i + 1));
    }

    printf("%.6f\n", f);
    return 0;
}

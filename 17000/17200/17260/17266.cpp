#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    cin >> m;

    int data[m];
    for (int i = 0; i < m; i++) {
        cin >> data[i];
    }

    int max_size = 0;
    
    for (int i = 1; i < m; i++) {
        max_size = max(max_size, data[i] - data[i - 1]);
    }

    int res[] = {(max_size + 1) / 2, data[0], n - data[m - 1]};
    
    sort(res, res + 3);
    cout << res[2] << endl;

    return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k;
    cin >> k;

    int arr[6];

    int maxW = 0;
    int maxH = 0;
    int cutW = 0;
    int cutH = 0;

    for (int i = 0; i < 6; i++) {
        int direction;
        cin >> direction >> arr[i];
    }

    for (int i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            maxW = max(maxW, arr[i]);
        } else {
            maxH = max(maxH, arr[i]);   
        }
    }

    for (int i = 0; i < 6; i++) {
        if (i % 2 == 0) {
            if (maxW == arr[(i + 5) % 6] + arr[(i + 1) % 6]) {
                cutW = arr[i];
            } else {
                if (maxW == arr[(i + 5) % 6] + arr[(i + 1) % 6]) {
                    cutH = arr[i];
                }
            }
        }
    }

    cout << (maxW * maxH - cutW * cutH) * k << endl;
}

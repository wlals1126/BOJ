#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> heights(N);
    for (int i = 0; i < N; ++i) {
        cin >> heights[i];
    }

    int max_uphill = 0;
    int uphill_length = 0;
    for (int i = 1; i < N; ++i) {
        if (heights[i] > heights[i - 1]) {
            uphill_length++;
        } else {
            max_uphill = max(max_uphill, uphill_length);
            uphill_length = 0;
        }
    }

    max_uphill = max(max_uphill, uphill_length);

    cout << max_uphill << endl;

    return 0;
}

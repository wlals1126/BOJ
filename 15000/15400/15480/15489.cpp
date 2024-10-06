#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C, W;
    cin >> R >> C >> W;
    R--;  
    C--;

    vector<vector<int>> arr(R + W, vector<int>(R + W, 0));

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
            }
        }
    }

    int sum = 0, index = 1;
    for (int i = R; i < R + W; i++) {
        for (int j = C; j < C + index; j++) {
            sum += arr[i][j];
        }
        index++;
    }

    cout << sum << endl;
    return 0;
}

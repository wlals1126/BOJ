#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    vector<vector<char>> room(N, vector<char>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> room[i][j];
        }
    }

    int horizontal = 0;
    int vertical = 0;

    for (int i = 0; i < N; ++i) {
        int count = 0;
        for (int j = 0; j < N; ++j) {
            if (room[i][j] == '.') {
                count++;
            } else {
                if (count >= 2) {
                    horizontal++;
                }
                count = 0;
            }
        }
        if (count >= 2) {
            horizontal++;
        }
    }

    for (int j = 0; j < N; ++j) {
        int count = 0;
        for (int i = 0; i < N; ++i) {
            if (room[i][j] == '.') {
                count++;
            } else {
                if (count >= 2) {
                    vertical++;
                }
                count = 0;
            }
        }
        if (count >= 2) {
            vertical++;
        }
    }

    cout << horizontal << " " << vertical << endl;

    return 0;
}

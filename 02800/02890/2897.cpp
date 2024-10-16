#include <iostream>
#include <vector>
using namespace std;

int main() {
    int R, C;
    cin >> R >> C;

    vector<vector<char>> arr(R, vector<char>(C));

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> arr[i][j];
        }
    }

    int zero = 0, one = 0, two = 0, three = 0, four = 0;

    for (int i = 0; i < R - 1; i++) {
        for (int j = 0; j < C - 1; j++) {
            int cnt = 0;

            if (arr[i][j] == '#' || arr[i + 1][j] == '#' || arr[i][j + 1] == '#' || arr[i + 1][j + 1] == '#') 
                continue;

            for (int m = i; m < i + 2; m++) {
                for (int n = j; n < j + 2; n++) {
                    if (arr[m][n] == 'X') cnt++;
                }
            }

            switch (cnt) {
                case 0: zero++; break;
                case 1: one++; break;
                case 2: two++; break;
                case 3: three++; break;
                case 4: four++; break;
            }
        }
    }

    cout << zero << endl << one << endl << two << endl << three << endl << four << endl;

    return 0;
}

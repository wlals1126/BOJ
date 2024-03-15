#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int tmpi = 0, tmpj = 0;
    vector<vector<char>> map(N, vector<char>(M));

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> map[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            if (map[i][j] == 'X') {
                tmpi++;
                break;
            }

    for (int j = 0; j < M; j++)
        for (int i = 0; i < N; i++)
            if (map[i][j] == 'X') {
                tmpj++;
                break;
            }

    cout << max(N - tmpi, M - tmpj) << endl;

    return 0;
}

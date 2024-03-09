#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

int n, m, cabbage;
bool a[51][51];
bool check[51][51];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

void dfs(int y, int x) {
    if (check[y][x]) return;
    check[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];

        if (nx >= 0 && ny >= 0 && nx < m && ny < n && a[ny][nx]) {
            dfs(ny, nx);
        }
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        cin >> m >> n >> cabbage;
        memset(a, false, sizeof(a));
        memset(check, false, sizeof(check));

        for (int i = 0; i < cabbage; i++) {
            int x, y;
            cin >> x >> y;
            a[y][x] = true;
        }

        int worm_count = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] && !check[i][j]) {
                    dfs(i, j);
                    worm_count++;
                }
            }
        }
        cout << worm_count << "\n";
    }

    return 0;
}

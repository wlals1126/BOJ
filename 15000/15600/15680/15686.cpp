#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int N, M, minDistance = INT_MAX;
vector<vector<int>> city;
vector<pair<int, int>> chickens;
vector<pair<int, int>> homes;

void combination(int idx, int selectedCnt, vector<pair<int, int>>& selected) {
    if (selectedCnt == M) {
        int totalDistance = 0;
        for (const auto& home : homes) {
            int minDist = INT_MAX;
            for (const auto& chicken : selected) {
                int dist = abs(home.first - chicken.first) + abs(home.second - chicken.second);
                minDist = min(minDist, dist);
            }
            totalDistance += minDist;
        }
        minDistance = min(minDistance, totalDistance);
        return;
    }
    if (idx == chickens.size()) return;

    selected.push_back(chickens[idx]);
    combination(idx + 1, selectedCnt + 1, selected);
    selected.pop_back();

    combination(idx + 1, selectedCnt, selected);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> N >> M;
    city.resize(N, vector<int>(N));

    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> city[i][j];
            if (city[i][j] == 2)
                chickens.emplace_back(i, j);
            else if (city[i][j] == 1)
                homes.emplace_back(i, j);
        }
    }

    vector<pair<int, int>> selected;
    combination(0, 0, selected);

    cout << minDistance << endl;

    return 0;
}

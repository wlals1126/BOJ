#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> numbers;
vector<int> selected;
vector<bool> visited;

void permutation(int N, int M, int depth) {
    if (depth == M) {
        for (int i = 0; i < M; i++) {
            cout << selected[i] << " ";
        }
        cout << endl;
        return;
    }

    int prev_num = -1;
    for (int i = 0; i < N; i++) {
        if (!visited[i] && numbers[i] != prev_num) {
            visited[i] = true;
            selected[depth] = numbers[i];
            permutation(N, M, depth + 1);
            visited[i] = false;
            prev_num = numbers[i];
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;

    numbers.resize(N);
    selected.resize(M);
    visited.resize(N, false);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    permutation(N, M, 0);

    return 0;
}

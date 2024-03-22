#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, M;
vector<int> numbers;
vector<int> selected;

void permutation(int depth, int start) {
    if (depth == M) {
        for (int i = 0; i < M; i++) {
            cout << selected[i] << " ";
        }
        cout << "\n";
        return;
    }

    int prevNum = -1;
    for (int i = start; i < N; i++) {
        if (numbers[i] != prevNum) {
            selected[depth] = numbers[i];
            permutation(depth + 1, i);
            prevNum = numbers[i];
        }
    }
}

int main() {
    cin >> N >> M;
    
    numbers.resize(N);
    selected.resize(M);

    for (int i = 0; i < N; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    permutation(0, 0);

    return 0;
}

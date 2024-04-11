#include <iostream>

using namespace std;

void hanoi(int cnt, int start, int tmp, int end) {
    if (cnt == 1) {
        cout << start << " " << end << "\n";
    } else {
        hanoi(cnt - 1, start, end, tmp);
        cout << start << ' ' << end << "\n";
        hanoi(cnt - 1, tmp, start, end);
    }
}

int hanoi_cnt(int cnt) {
    if (cnt == 1) {
        return 1;
    } else {
        return 2 * hanoi_cnt(cnt-1) + 1;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt;
    cin >> cnt;
    cout << hanoi_cnt(cnt) << "\n";
    hanoi(cnt, 1, 2, 3);
    return 0;
}

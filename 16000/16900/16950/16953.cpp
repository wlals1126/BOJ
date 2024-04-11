#include <iostream>

using namespace std;

long long answer = -1;
long long A, B;

void find(long long start, long long count) {
    if (start == B) {
        if (answer == -1 || answer > count) {
            answer = count;
        }
    } else if (start < B) {
        find(start * 2, count + 1);
        find(start * 10 + 1, count + 1);
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    cin >> A >> B;

    find(A, 1);
    cout << answer;

    return 0;
}

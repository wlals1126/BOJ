#include <iostream>
#include <string>

using namespace std;

bool isLuckyNumber(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int N;
    cin >> N;

    for (int i = N; i >= 4; --i) {
        if (isLuckyNumber(i)) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}

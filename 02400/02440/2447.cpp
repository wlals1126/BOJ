#include <iostream>

using namespace std;

void printStars(int x, int y, int n) {
    if ((x / n) % 3 == 1 && (y / n) % 3 == 1) {
        cout << ' ';
    } else {
        if (n == 1) {
            cout << '*';
        } else {
            printStars(x, y, n / 3);
        }
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printStars(i, j, n);
        }
        cout << '\n';
    }

    return 0;
}

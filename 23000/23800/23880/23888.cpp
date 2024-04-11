#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a, d;
    cin >> a >> d;

    long long q;
    cin >> q;

    for (long long i = 0; i < q; ++i) {
        long long condition, l, r;
        cin >> condition >> l >> r;
        long long result = 0;

        if (condition == 1) {
            long long tmp1 = r * (2 * a + (r - 1) * d) / 2;
            long long tmp2 = (l - 1) * (2 * a + (l - 2) * d) / 2;
            result = tmp1 - tmp2;
        } else if (condition == 2) {
            if (l == r) {
                result = a + (l - 1) * d;
            } else {
                result = gcd(a, d);
            }
        }
        cout << result << "\n";
    }

    return 0;
}

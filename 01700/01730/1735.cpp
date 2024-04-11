#include <iostream>
#include <cmath>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a1, b1, a2, b2;
    std::cin >> a1 >> b1 >> a2 >> b2;

    int numerator = a1 * b2 + a2 * b1;
    int denominator = b1 * b2;

    int common = gcd(numerator, denominator);
    numerator /= common;
    denominator /= common;

    std::cout << numerator << " " << denominator << std::endl;

    return 0;
}

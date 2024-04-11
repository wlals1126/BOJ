#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);

    int a1, a0;
    iss >> a1 >> a0;

    int c, n;
    std::cin >> c >> n;

    int ans = ((a1 * n) + a0 <= c * n && c >= a1) ? 1 : 0;
    std::cout << ans << std::endl;

    return 0;
}

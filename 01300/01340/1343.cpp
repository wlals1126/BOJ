#include <iostream>
#include <string>

int main() {
    std::string board;
    std::cin >> board;

    size_t pos;
    while ((pos = board.find("XXXX")) != std::string::npos) {
        board.replace(pos, 4, "AAAA");
    }
    while ((pos = board.find("XX")) != std::string::npos) {
        board.replace(pos, 2, "BB");
    }

    if (board.find('X') != std::string::npos) {
        std::cout << -1 << std::endl;
    } else {
        std::cout << board << std::endl;
    }

    return 0;
}

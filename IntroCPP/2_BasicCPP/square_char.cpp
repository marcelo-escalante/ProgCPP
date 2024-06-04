#include <string>
#include <iostream>

int main(int argc, char **argv) {

    int n;
    std::string ch;

    n = std::stoi(argv[1]);
    ch = argv[2];

    for (int i = 0; i < n; ++i) {
        std::cout << ch;
    }

    std::cout << std::endl;

    for (int i = 0; i < n - 2; ++i) {
        std::cout << ch;
        for (int i = 0; i < n-2; ++i) {
            std::cout << " ";
        }
        std::cout << ch << std::endl;
    }

    for (int i = 0; i < n; ++i) {
        std::cout << ch;
    }

    return 0;
}
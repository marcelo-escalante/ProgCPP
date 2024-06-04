#include <iostream>
#include <cmath>

int invert(int m);

int main(void) {

    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    if (n == invert(n)) {
        std::cout << n << " is palindrome" << std::endl;
    }
    else {
        std::cout << n << " is not palindrome" << std::endl;
    }

    return 0;
}

int invert(int m) {
    int p = 0;
    int m_aux = m;
    while (m_aux > 0) {
        p += 1;
        m_aux /= 10;
    }

    m_aux = m;
    int inverted = 0;
    for (int i = 0; i < p; ++i) {
        inverted += m_aux%10 * std::pow(10,p-i-1);
        m_aux /= 10;
    }
    return inverted;
}
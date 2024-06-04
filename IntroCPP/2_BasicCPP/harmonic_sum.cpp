/*
Imprimir la suma harmónica hasta un entero n
*/

#include <iostream>

int main(void) {
    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; ++i){
        sum += 1.0 / i;
    }

    std::cout << sum << std::endl;

    return 0;
}
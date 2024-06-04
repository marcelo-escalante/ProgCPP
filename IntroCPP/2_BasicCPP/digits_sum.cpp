/*
Imprmir la suma de los dígitos de un entero
*/

#include <iostream>

int main(void) {

    int n;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;

    int n2 = n, i = 0, sum = 0;
    while (n2 > 0){
        sum += n2%10;
        n2 /= 10;
    }

    std::cout << sum << std::endl;

    return 0;
}
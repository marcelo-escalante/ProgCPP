#include <string>
#include <iostream>
#include "primes.h"


int main(int argc, char **argv) {

    int nmin, nmax;

    nmin = std::stoi(argv[1]);
    nmax = std::stoi(argv[2]);

    for (int i = nmin; i <= nmax - 4; ++i) {
        if (isprime(i) and isprime(i+4)) {
            std::cout << "(" << i << "," << i+4 << ") ";
        }
    }
    std::cout << std::endl;

    std::cout << nmin << std::endl;
    std::cout << nmax << std::endl;

    return 0;
}

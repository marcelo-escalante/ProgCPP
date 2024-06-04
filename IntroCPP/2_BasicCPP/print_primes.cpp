#include <string>
#include <iostream>

bool isprime(int m);

int main(int argc, char **argv) {

    int nmin, nmax;

    nmin = std::stoi(argv[1]);
    nmax = std::stoi(argv[2]);

    for (int i = nmin; i <= nmax; ++i) {
        if (isprime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

bool isprime(int m) {
    if (m < 2){
        return false;
    }
    for (int i = 2; i*i <= m; ++i) {
        if (m%i == 0) {
            return false;
        }
    }
    return true;
}
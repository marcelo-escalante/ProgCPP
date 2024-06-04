#include "primes.h"

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
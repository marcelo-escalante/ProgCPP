/*
Imprimir los números primos menores a n para en entre 2 y 1000
*/

#include <iostream>

bool isprime(int m);
int count_primes_less_than(int m);

int main(void) {
    for (int i = 2; i <= 1000; ++i){
        std::cout << i << "\t" << count_primes_less_than(i) << std::endl;
    }
    return 0;
}

int count_primes_less_than(int m){
    int counter = 0;
    for (int i = 2; i < m; ++i){
        if (isprime(i)){
            counter += 1;
        }
    }
    return counter;
}

bool isprime(int m){

    if (m < 2){
        return false;
    }
    for (int i = 2; i < m; ++i){
        if (m%i == 0){
            return false;
        }
    }
    return true;
}
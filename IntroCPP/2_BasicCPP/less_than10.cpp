/*
Si es menor o igual a 10, imprimir si es primo. Si es mayor: "Too large to verify manually"
*/

#include <iostream> 

bool isprime(int m);

int main(void) {

    int n;
    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (n <= 10){
        std::cout << isprime(n) << std::endl;
    }
    else {
        std::cout << "Too large to verify manually" << std::endl;
    }
    return 0;

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
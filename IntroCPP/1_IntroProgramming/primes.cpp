#include <iostream>

bool isprime(int m);

int main(void) {

    //int counter = 0;
    int n = 100;
    for (int i = 1; i <= n; ++i){
        if (isprime(i)){
            std::cout << i << std::endl;
            //counter += 1;
        }
    }
    //std::cout << counter << std::endl;
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
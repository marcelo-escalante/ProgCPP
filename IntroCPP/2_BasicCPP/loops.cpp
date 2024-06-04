#include <iostream>

int main(void) {
    
    //for loop
    for (int i = 5; i <= 223; ++i) {
        if (i%3 == 0 and i%7==0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    //while loop
    int i = 5;
    while (i <= 223) {
        if (i%3 == 0 and i%7==0) {
            std::cout << i << " ";
        }
        ++i;
    }
    std::cout << std::endl;

    //do while
    i = 5;
    do {
        if (i%3 == 0 and i%7==0) {
            std::cout << i << " ";
        }
        ++i;
    } while (i < 223);
    std::cout << std::endl;

    return 0;
}
#include <iostream> 

int main(void) {
    
    std::cout << "Enter name: ";
    std::string name;
    std::getline(std::cin, name);

    std::cout << "Hello " << name << std::endl;
}
#include <iostream>
#include "mylibrary.h"

int main() {

    std::cout << "Enter your name: ";
    std::string name;
    std::cin >> name;
    std::cout << "Hello, " << name << "!" << std::endl;

    MyCustomNamespace::cout << "Custom: " <<name;

    return 0;
}
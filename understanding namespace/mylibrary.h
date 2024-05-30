#ifndef MYLIBRARY_H
#define MYLIBRARY_H

#include <iostream>

namespace MyCustomNamespace {
    // Define a custom cout class that behaves like std::cout
    class CustomCout {
    public:
        template <typename T>
        CustomCout& operator<<(const T& data) {
            std::cout << data;
            return *this;
        }
    };

    // Create an instance of CustomCout
    static CustomCout cout;
}

#endif // MYLIBRARY_H

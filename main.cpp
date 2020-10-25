#include <iostream>

bool tiny[1];
bool small[2];
bool big[3];
bool large[4];

int main() {
    std::cout << "Tiny: " << sizeof(tiny) << std::endl;
    std::cout << "Small: " << sizeof(small) << std::endl;
    std::cout << "Big: " << sizeof(big) << std::endl;
    std::cout << "Large: " << sizeof(large) << std::endl;
}

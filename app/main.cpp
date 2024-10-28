#include "app.h"
#include <iostream>

int main() {
    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    std::cout << "Hexadecimal: " << vsite::oop::v1::to_hex(num) << std::endl;

    vsite::oop::v1::mult_table(num, std::cout);

    return 0;
}
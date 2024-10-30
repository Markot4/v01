#pragma once
#pragma once
#include <string>
#include <iostream>

namespace vsite::oop::v1
{
    std::string to_hex(int value);
    
    std::string to_exp(double value);

    void mult_table(int n, std::ostream& out);
}

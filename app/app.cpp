#include "app.h"
#include <format>

namespace vsite::oop::v1
{
    std::string to_hex(int value) {
        return std::format("{:X}", value); // koristi {:X} za formatiranje u heksadecimalni format sa velikim slovima
    }

    std::string to_exp(double value) {
        return std::format("{:.2e}", value); // koristi {:.2e} za formatiranje u eksponencijalni format sa dvije decimale
    }

    void mult_table(const int num, std::ostream& ss) {
        if (num == 0 || num > 20) {
            return;
        }

        for (int i = 0; i <= num; ++i) {
            for (int j = 0; j <= num; ++j) {
                if (j == 0) {
                    ss << std::format("{}", i);
                }
                else if (i == 0) {
                    ss << std::format("{:4}", j);
                }
                else {
                    ss << std::format("{:4}", i * j);
                }
            }
            ss << "\n";
        }
    }
}

#include "app.h"
#include <sstream>
#include <iomanip>
#include <format>

namespace vsite::oop::v1
{
    std::string to_hex(int value) {
        std::stringstream ss;
        ss << std::uppercase << std::hex << value;
        return ss.str();
    }
    
    std::string to_exp(double value) {
        std::stringstream ss;
        ss << std::scientific << std::setprecision(2) << value;
        return ss.str();
    }

	void mult_table(const int num, std::ostream& ss)
	{
		if (num == 0 || num > 20)
		{
			return;
		}

		for (int i = 0; i <= num; ++i)
		{
			for (int j = 0; j <= num; ++j)
			{
				if (j == 0)
				{
					ss << std::format("{}", i);

				}
				else if (i == 0)
				{
					ss << std::format("{:4}", j);
				}
				else
				{
					ss << std::format("{:4}", i * j);
				}

			}
			ss << "\n";
		}
	}
}
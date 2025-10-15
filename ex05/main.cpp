#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << BOLD << "Testing Harl complain function:\n" << RESET << std::endl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");

    std::cout << "\n" << BOLD << "Testing invalid level:\n" << RESET << std::endl;
    harl.complain("INVALID");
    harl.complain("test");

    return 0;
}

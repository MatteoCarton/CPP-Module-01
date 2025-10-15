#include "Harl.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << RED << "Error: " << RESET << "Please provide exactly one level" << std::endl;
        std::cout << CYAN << "Levels: " << RESET << "DEBUG, INFO, WARNING, ERROR" << std::endl;
        return (1);
    }

    std::string input = argv[1];

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    int levelIndex = -1;

    for (int i = 0; i < 4; i++) {
      if (levels[i] == input) {
          levelIndex = i;
          break;
      }
    }

    Harl harl;

    switch (levelIndex)
    {
    case 0:
        std::cout << BOLD << CYAN << "[ DEBUG ]" << RESET << std::endl;
        harl.complain("DEBUG");
        std::cout << std::endl;
    case 1:
        std::cout << BOLD << GREEN << "[ INFO ]" << RESET << std::endl;
        harl.complain("INFO");
        std::cout << std::endl;
    case 2:
        std::cout << BOLD << YELLOW << "[ WARNING ]" << RESET << std::endl;
        harl.complain("WARNING");
        std::cout << std::endl;
    case 3:
        std::cout << BOLD << RED << "[ ERROR ]" << RESET << std::endl;
        harl.complain("ERROR");
        break;
    default:
        std::cout << MAGENTA << "[ Probably complaining about insignificant problems ]" << RESET << std::endl;
        break;
    }

    return (0);
}
#include <string>
#include <iostream>

#define RESET   "\033[0m"
#define CYAN    "\033[36m"
#define YELLOW  "\033[33m"
#define GREEN   "\033[32m"
#define BLUE    "\033[34m"
#define BOLD    "\033[1m"

int main()
{
    std::string myString = "HI THIS IS BRAIN";
    std::string* stringPTR = &myString;
    std::string& stringREF = myString;

    std::cout   << BOLD << CYAN << "Memory addresses:" << RESET << std::endl
                << YELLOW << "myString:  " << RESET << &myString << std::endl
                << YELLOW << "stringPTR: " << RESET << stringPTR << std::endl
                << YELLOW << "stringREF: " << RESET << &stringREF << std::endl

                << std::endl

                << BOLD << CYAN << "Values:" << RESET << std::endl
                << GREEN << "myString:  " << RESET << BLUE << myString << RESET << std::endl
                << GREEN << "stringPTR: " << RESET << BLUE << *stringPTR << RESET << std::endl
                << GREEN << "stringREF: " << RESET << BLUE << stringREF << RESET << std::endl;

    return 0;
}
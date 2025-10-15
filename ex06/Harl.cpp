#include "Harl.hpp"
#include <iostream>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug( void )
{
    std::cout << CYAN << "This is a debug message." << RESET << std::endl;
}

void Harl::info( void )
{
    std::cout << GREEN << "This is an info message." << RESET << std::endl;
}

void Harl::warning( void )
{
    std::cout << YELLOW << "This is a warning message." << RESET << std::endl;
}

void Harl::error( void )
{
    std::cout << RED << "This is an error message." << RESET << std::endl;
}

void Harl::complain( std::string level )
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    void (Harl::*functions[4])( void ) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return;
        }
    }

    std::cout << MAGENTA << "Invalid level: " << RESET << level << std::endl;
}
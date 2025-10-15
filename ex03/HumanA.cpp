#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
}

HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::cout   << BOLD <<  CYAN << _name 
                << RED << " attacks with their " 
                << YELLOW << _weapon.getType() << RESET << std::endl;
}
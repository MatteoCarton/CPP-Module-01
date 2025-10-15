#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& weapon)
{
    _weapon = &weapon;
}

void HumanB::attack()
{
    if (_weapon == NULL)
    {
        std::cout   << BOLD << CYAN << _name
                    << MAGENTA << " doesn't have an weapon ❌" << std::endl;
        return ;
    }

    std::cout   << BOLD <<  CYAN << _name 
                << RED << " attacks with their " 
                << YELLOW << _weapon->getType() << RESET << std::endl;
}
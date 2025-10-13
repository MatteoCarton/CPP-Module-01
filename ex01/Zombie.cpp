#include "Zombie.hpp"

Zombie::Zombie()
{

}

Zombie::~Zombie()
{
    std::cout << "Rip : " << _name << std::endl;
}

void Zombie::announce()
{
    std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}
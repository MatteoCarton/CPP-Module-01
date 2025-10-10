#include "Zombie.hpp"

int main()
{
    Zombie* monZombie = newZombie("Lob");
    monZombie->announce();
    
    randomChump("Bob");

    delete monZombie;

    return 0;
}
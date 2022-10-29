


#include "ClapTrap.hpp"

int main()
{
    ClapTrap a = ClapTrap("1337");
    ClapTrap n = ClapTrap("ENSA");

    a.attack("ENSA");
    a.attack("ENSA");
    a.attack("ENSA");

    n.takeDamage(5);
    n.attack("1337");
    a.takeDamage(5);

    //std::cout <<  << std::endl;
    return 0;
}
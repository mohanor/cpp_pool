#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap(std::string name);
        ScavTrap();
        ~ScavTrap();
        void guardGate();
        void attack(const std::string& target);
};
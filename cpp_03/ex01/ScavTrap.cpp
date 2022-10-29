
#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "ScavTrap constructor called" << std::endl;
	this->name = name;
	this->hit = 100;
	this->energy = 50; 
	this->damage = 20;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hit <= 0 || this->energy <= 0)
		return ;
    std::cout << "ScavTrap " << this->name << " attacks "<< target << std::endl;
	this->energy--;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate" << std::endl;
}

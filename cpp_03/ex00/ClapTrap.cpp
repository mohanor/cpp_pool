
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "constructor called" << std::endl;
	this->name = name;
	this->hit = 10;
	this->energy = 10; 
	this->damage = 0;
}

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obj)
    {
		this->name = obj.name;
        this->hit = obj.hit;
        this->energy = obj.energy;
        this->damage = obj.damage;
	}
    return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit <= 0 || this->energy <= 0)
	{
		std::cout << this->name << "  : i can't do anything" << std::endl;
		return ;
	}
    std::cout << "ClapTrap " << this->name << " attacks "<< target << " causing " << this->damage <<" points of damage! " << std::endl;
	this->energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->name << " : take damage" << std::endl;
	this->damage -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit <= 0 || this->energy <= 0)
	{
		std::cout << this->name << "  : i can't do anything" << std::endl;
		return ;
	}
	this->hit += amount;
	this->energy--;
}

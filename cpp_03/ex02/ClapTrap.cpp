/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:01:43 by matef             #+#    #+#             */
/*   Updated: 2022/10/29 14:20:52 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	this->name = name;
	this->hit = 10;
	this->energy = 10; 
	this->damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit <= 0 || this->energy <= 0)
		return ;
    std::cout << "ClapTrap " << this->name << " attacks "<< target << std::endl;
	this->energy--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->damage += amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit <= 0 || this->energy <= 0)
		return ;
	this->hit += amount;
	this->energy--;
}

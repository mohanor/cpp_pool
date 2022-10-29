/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:01:50 by matef             #+#    #+#             */
/*   Updated: 2022/10/29 14:23:35 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap constructor called" << std::endl;
	this->name = name;
	this->hit = 100;
	this->energy = 100; 
	this->damage = 30;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "give me high fives" << std::endl;
}

FragTrap::FragTrap(FragTrap const &obj)
{
	
}

FragTrap &FragTrap::operator= (FragTrap const &obj)
{
	
}
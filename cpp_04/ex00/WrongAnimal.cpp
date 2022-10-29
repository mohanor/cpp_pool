/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:55:51 by matef             #+#    #+#             */
/*   Updated: 2022/10/29 18:25:52 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
    std::cout << "WrongAnimal Copy constructor called" << std::endl;
    *this = obj;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &obj)
{
    std::cout << "WrongAnimal Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

void WrongAnimal::makeSound()
{
    std::cout << "WrongAnimal make sound" << std::endl;
}

std::string    WrongAnimal::getType()
{
    return this->type;
}
void    WrongAnimal::setType(std::string type)
{
    this->type = type;
}
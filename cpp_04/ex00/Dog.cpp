/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:31:25 by matef             #+#    #+#             */
/*   Updated: 2022/10/29 22:39:10 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    this->type = "Dog";
}

Dog::Dog(const Dog &obj)
{
    *this = obj;
}

Dog &Dog::operator= (const Dog &obj)
{
    std::cout << "Dog Copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()
{
    std::cout << this->getType() << " : woof, woof" << std::endl;
}

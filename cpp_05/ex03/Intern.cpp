/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:06:54 by matef             #+#    #+#             */
/*   Updated: 2022/11/09 14:35:34 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern &obj)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = obj;
}



Intern &Intern::operator= (const Intern &obj)
{
    std::cout << "Intern copy assignment operator called" << std::endl;
    if (this != &obj)
        this->type = obj.type;
    return *this;
}

Intern::~Intern()
{
}

Form *Intern::makeForm(std::string name, std::string target)
{
    std::string forms[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};

    for (int i = 0; i < 3; i++)
    {
        if (forms[i] == name)
        {
            switch(i)
            {
                case 0 :
                    return new ShrubberyCreationForm(target);
                case 1 :
                    return new RobotomyRequestForm(target);
                case 2 :
                    return new PresidentialPardonForm(target);
            }
        }
    }
    
    std::cout << "error : from not exist" << std::endl;
    return NULL; 
}

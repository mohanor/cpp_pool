/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:26 by matef             #+#    #+#             */
/*   Updated: 2022/11/10 14:16:51 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form *robotomy;
    Form *shrubbery;
    Form *presidential;
    Form *none;
    
    robotomy = someRandomIntern.makeForm("RobotomyRequestForm", "robotomy");
    shrubbery = someRandomIntern.makeForm("ShrubberyCreationForm", "shrubbery");
    presidential = someRandomIntern.makeForm("PresidentialPardonForm", "presidential");
    none = someRandomIntern.makeForm("robotomy request", "Bender");
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:26 by matef             #+#    #+#             */
/*   Updated: 2022/11/10 13:39:36 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    ShrubberyCreationForm shrubbery("home");
    PresidentialPardonForm presidential("home");
    RobotomyRequestForm robotomy("home");

    Bureaucrat s = Bureaucrat("ahmed", 1);


    std::cout << "\n\n";
    shrubbery.beSigned(s);
    
    shrubbery.action(s);
    presidential.action(s);
    robotomy.action(s);
   
    std::cout << "\n\n";
    return 0;
}

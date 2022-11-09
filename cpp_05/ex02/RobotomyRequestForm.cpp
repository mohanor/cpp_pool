/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:38 by matef             #+#    #+#             */
/*   Updated: 2022/11/08 21:32:35 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) :  Form("Robotomy", 1, 1)
{
    this->target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::action(Bureaucrat &obj)
{
    srand(time(0));
    
    if (rand() % 2 == 1)
        std::cout << this->target <<" has been robotomized successfully " << std::endl;
    else
        std::cout << this->target <<"  robotomized feiled " << std::endl;
}
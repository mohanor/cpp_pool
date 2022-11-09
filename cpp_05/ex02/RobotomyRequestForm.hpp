/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:41 by matef             #+#    #+#             */
/*   Updated: 2022/11/08 20:40:20 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"


class RobotomyRequestForm : public Form
{
    private:
        std::string target;
        // const int sign;
        // const int exec;
    public:
        RobotomyRequestForm(std::string target);
        ~RobotomyRequestForm();
        void action(Bureaucrat &obj);
};



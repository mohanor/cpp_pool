/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:47 by matef             #+#    #+#             */
/*   Updated: 2022/11/10 13:53:53 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm();

        ShrubberyCreationForm(const ShrubberyCreationForm &obj);
        ShrubberyCreationForm &operator= (const ShrubberyCreationForm &obj);
        ShrubberyCreationForm(std::string target);
        ~ShrubberyCreationForm();
        void action(Bureaucrat &obj);
        std::string getTarget() const;
};



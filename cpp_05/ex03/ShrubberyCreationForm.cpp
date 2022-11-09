/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:44 by matef             #+#    #+#             */
/*   Updated: 2022/11/08 22:02:07 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <unistd.h>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void ShrubberyCreationForm::action(Bureaucrat &obj)
{
    try
    {
        obj.executeForm(*this);
        std::cout << "ShrubberyCreationForm action" << std::endl;
        std::ofstream outfile (target + "_shrubbery");
        
        
        outfile <<  "    oxoxoo    ooxoo\n"
                    "  ooxoxo oo  oxoxooo\n"
                    " oooo xxoxoo ooo ooox\n"
                    " oxo o oxoxo  xoxxoxo\n"
                    "  oxo xooxoooo o ooo\n"
                    "    ooo\\oo\\  /o/o\n"
                    "        \\  \\/ /\n"
                    "         |   /\n"
                    "         |  |\n"
                    "         | D|\n"
                    "         |  |\n"
                    "         |  |\n"
                    "  ______/____\\____";
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:57:35 by matef             #+#    #+#             */
/*   Updated: 2022/11/08 20:39:55 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    private:
        std::string target;
        // const int sign;
        // const int exec;
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        void action(Bureaucrat &obj);
};

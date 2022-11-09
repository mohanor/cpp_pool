/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 22:06:50 by matef             #+#    #+#             */
/*   Updated: 2022/11/09 14:32:30 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Intern
{
    private:

    public:
        Intern();
        Intern(const Intern &obj);
		Intern &operator=(const Intern &obj);
        ~Intern();
        Form *makeForm(std::string name, std::string target);
};
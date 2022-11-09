/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 15:35:28 by matef             #+#    #+#             */
/*   Updated: 2022/11/08 11:55:02 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <exception>

class Bureaucrat
{
    private:
        const std::string name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat(std::string name);
        Bureaucrat(const Bureaucrat &obj);
        Bureaucrat &operator= (const Bureaucrat &obj);
        ~Bureaucrat();
        std::string getName() const;
        int         getGrade() const;
        void        increment();
        void        decrement();
        class GradeTooHighException : public std::exception {
            public:
                const char* what() const throw();
        };


        class GradeTooLowException : public std::exception {
            public:
                const char* what() const throw();
        };
};

std::ostream &operator<< (std::ostream& os, Bureaucrat const &obj);

#endif
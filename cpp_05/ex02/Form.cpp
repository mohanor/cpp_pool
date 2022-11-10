/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:43 by matef             #+#    #+#             */
/*   Updated: 2022/11/10 14:38:28 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeToSigned, int gradeToExecute) : name(name), gradeToSigned(gradeToSigned), gradeToExecute(gradeToExecute)
{
    std::cout << "Form default constructor called" << std::endl;
    if (gradeToSigned < 1)
        throw Bureaucrat::GradeTooHighException();
    if (gradeToSigned > 150)
        throw Bureaucrat::GradeTooLowException();
    if (name == "")
    {
        std::cout << "name cant be empty" << std::endl;
        exit(0);
    }
}

Form::~Form()
{
    std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName() const
{
    return this->name;
}

int Form::getGradeToSigned() const
{
    return this->gradeToSigned;
}

int Form::getGradeToExecute() const
{
    return this->gradeToExecute;
}

bool Form::getFormSigned() const
{
    return this->formSigned;
}

void Form::setFormSigned(bool fromSigned)
{
    this->formSigned = fromSigned;
}

const char * Form::GradeTooHighException::what() const throw()
{
    return ("GradeTooLowException1");
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException2");
}

void Form::beSigned(Bureaucrat  &obj)
{
    if (obj.getGrade() <= this->getGradeToSigned())
        this->setFormSigned(true);
    else
    {
        this->setFormSigned(false);
        throw Form::GradeTooLowException();
    }
}

void Form::execute(Bureaucrat & executor) const
{
    if (!(executor.getGrade() <= this->gradeToExecute && this->formSigned))
        throw Form::GradeTooLowException();
}

std::ostream &operator<< (std::ostream& os, Form const &obj)
{
    std::string sing = "NO";

    if (obj.getFormSigned())
        sing = "YES";
    os << "Form name : " << obj.getName() << "\ngrade to singed : " << obj.getGradeToSigned() << "\ngrade to exucute : " << obj.getGradeToExecute() << "\nSinged : " << sing;
    return os;
}

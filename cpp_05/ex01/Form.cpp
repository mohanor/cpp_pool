/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:09:43 by matef             #+#    #+#             */
/*   Updated: 2022/11/10 13:11:31 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(std::string name, int gradeToSigned, int gradeToExecute) : name(name), gradeToSigned(gradeToSigned), gradeToExecute(gradeToExecute)
{
    if (gradeToExecute < 1 || gradeToSigned < 1)
        throw Form::GradeTooHighException("GradeTooHighException");
    if (gradeToExecute > 150 || gradeToSigned > 150)
        throw Form::GradeTooLowException();
    if (name == "")
        throw std::invalid_argument("invalid argument");
}

Form::Form(const Form &obj) : name(obj.name), gradeToSigned(obj.gradeToSigned), gradeToExecute(obj.gradeToExecute)
{
    *this = obj;
}

Form &Form::operator= (const Form &obj)
{
    if (this != &obj)
        this->formSigned = obj.getFormSigned();
    return *this;
}

Form::~Form()
{
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

Form::GradeTooHighException::GradeTooHighException(const char *message) : message(message) {}

const char *Form::GradeTooHighException::what() const throw()
{
    return this->message;
}

const char * Form::GradeTooLowException::what() const throw()
{
    return ("GradeTooLowException");
}

void Form::beSigned(Bureaucrat &obj)
{
    if (obj.getGrade() <= this->getGradeToSigned())
        this->setFormSigned(true);
    else
    {
        std::string h = obj.getName() + " couldn't sign " + this->getName() + " because his Grade Too Low.";
        this->setFormSigned(false);
        throw Form::GradeTooHighException(&h[0]);
    }
}

std::ostream &operator<< (std::ostream& os, Form const &obj)
{
    os << obj.getName() << ", bureaucrat grade to singed  " << obj.getGradeToSigned() << " and grade to exucute is " << obj.getGradeToExecute();
    return os;
}

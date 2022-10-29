/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 17:55:46 by matef             #+#    #+#             */
/*   Updated: 2022/10/29 18:21:53 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;

    public:
        WrongAnimal();
        ~WrongAnimal();
        void makeSound();
        WrongAnimal(const WrongAnimal &obj);
        WrongAnimal &operator= (const WrongAnimal &obj);
        void    setType(std::string type);
        std::string    getType();
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matef <matef@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:03:29 by matef             #+#    #+#             */
/*   Updated: 2022/11/01 14:21:28 by matef            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    int N = 10;
    Animal *animals[N];// = new Animal[N] ;

    for (int i = 0; i < N / 2; i++)
        animals[i] = new Dog();
    for (int i = N/2; i < N ; i++)
        animals[i] = new Cat();

    for(int i = 0; i < N; i++)
        std::cout << (i + 1) << " : " << animals[i]->getType()  << std::endl;
    
    delete j;
    delete i;
    for(int i = 0; i < N; i++)
        delete animals[i];

    return 0;
}


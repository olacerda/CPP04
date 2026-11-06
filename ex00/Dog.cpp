/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:41:30 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 00:26:38 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    :   Animal()
{
    this->type = "Dog";
    std::cout << "Dog constructor has been called. Au Au !!!" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor has been called. Au Au !!!" << std::endl;
}

Dog::Dog(const Dog& object)
    :   Animal(object)
{
    std::cout << "Dog copy constructor has been called. Au Au !!!" << std::endl;
}

Dog& Dog::operator=(const Dog& object)
{
    Animal::operator=(object);
    std::cout << "Dog assignment operator has been called. Au Au !!!" << std::endl;
    return *this;
}

void    Dog::makeSound() const {
    std::cout << "Auuuuuuuuuuuuuuuuu" << std::endl;
}
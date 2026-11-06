/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:41:30 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 04:00:14 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
    :   Animal()
{
    std::cout << "Dog constructor has been called. Au Au !!!" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::~Dog(){
    delete this->brain;
    std::cout << "Dog destructor has been called. Au Au !!!" << std::endl;
}

Dog::Dog(const Dog& obj)
    :   Animal(obj)
{
    std::cout << "Dog copy constructor has been called. Au Au !!!" << std::endl;
    this->brain = new Brain(*obj.brain);
}

Dog& Dog::operator=(const Dog& obj)
{
    std::cout << "Dog assignment operator has been called. Au Au !!!" << std::endl;
    Animal::operator=(obj);
    *this->brain = *obj.brain;
    return *this;
}

void    Dog::makeSound() const {
    std::cout << "Auuuuuuuuuuuuuuuuu" << std::endl;
}

Brain&  Dog::getBrain()
{
    return *this->brain;
}
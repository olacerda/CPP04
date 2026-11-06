/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:38:49 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 04:00:31 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
    :   Animal()
{
    std::cout << "Cat constructor has been called. Miau Miau !!!" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::~Cat(){
    delete this->brain;
    std::cout << "Cat destructor has been called. Miau Miau !!!" << std::endl;
}

Cat::Cat(const Cat& obj)
    :   Animal(obj)
{
    std::cout << "Cat copy constructor has been called. Miau Miau !!!" << std::endl;
    this->brain = new Brain(*obj.brain);
}

Cat& Cat::operator=(const Cat& obj) {
    std::cout << "Cat assignment operator has been called. Miau Miau !!!" << std::endl;
    Animal::operator=(obj);
    *this->brain = *obj.brain;
    return *this;
}

void    Cat::makeSound() const {
    std::cout << "Miauuuuuuuuuuuuuu" << std::endl;
}

Brain&  Cat::getBrain()
{
    return *this->brain;
}
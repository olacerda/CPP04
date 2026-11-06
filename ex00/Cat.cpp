/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:38:49 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 01:28:14 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
    :   Animal()
{
    this->type = "Cat";
    std::cout << "Cat constructor has been called. Miau Miau !!!" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor has been called. Miau Miau !!!" << std::endl;
}

Cat::Cat(const Cat& object)
    :   Animal(object)
{
    std::cout << "Cat copy constructor has been called. Miau Miau !!!" << std::endl;
}

Cat& Cat::operator=(const Cat& object) {
    Animal::operator=(object);
    std::cout << "Cat assignment operator has been called. Miau Miau !!!" << std::endl;
    return *this;
}

void    Cat::makeSound() const {
    std::cout << "Miauuuuuuuuuuuuuu" << std::endl;
}

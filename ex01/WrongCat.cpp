/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 00:38:54 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 03:59:52 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
    :   WrongAnimal()
{
    std::cout << "WrongCat constructor has been called. Miau....miau ???" << std::endl;
    this->type = "WrongCat";
    this->brain = new Brain();
}

WrongCat::~WrongCat(){
    delete this->brain;
    std::cout << "WrongCat destructor has been called. Miau... miau ???" << std::endl;
}

WrongCat::WrongCat(const WrongCat& obj)
    :   WrongAnimal(obj)
{
    std::cout << "WrongCat copy constructor has been called. Miau... miau ???" << std::endl;
    this->brain = new Brain(*obj.brain);
}

WrongCat&    WrongCat::operator=(const WrongCat& obj){
    std::cout << "WrongCat assignment operator has been called. Miau... miau ???" << std::endl;
    WrongAnimal::operator=(obj);
    *this->brain = *obj.brain;
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "Miau... Miau ???" << std::endl;
}

Brain&  WrongCat::getBrain()
{
    return *this->brain;
}
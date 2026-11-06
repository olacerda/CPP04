/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 00:38:54 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 05:13:21 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
    :   WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat constructor has been called. Miau....miau ???" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor has been called. Miau... miau ???" << std::endl;
}

WrongCat::WrongCat(const WrongCat& object)
    :   WrongAnimal(object)
{
    std::cout << "WrongCat copy constructor has been called. Miau... miau ???" << std::endl;
}

WrongCat&    WrongCat::operator=(const WrongCat& object){
    WrongAnimal::operator=(object);
    std::cout << "WrongCat assignment operator has been called. Miau... miau ???" << std::endl;
    return *this;
}

void    WrongCat::makeSound() const
{
    std::cout << "Miau... Miau ???" << std::endl;
}


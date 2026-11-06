/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 00:32:17 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 05:11:02 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    this->type = "WrongAnimal";
    std::cout << "WrongAnimal constructor has been called. Good by!!!" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor has been called. Good by!!!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& object){
    this->type = object.type;
    std::cout << "WrongAnimal copy constructor has been called. Good by!!!" << std::endl;
}

WrongAnimal&    WrongAnimal::operator=(const WrongAnimal& object){
    this->type = object.type;
    std::cout << "WrongAnimal assignment operator has been called. Good by!!!" << std::endl;
    return *this;
}

void    WrongAnimal::makeSound() const {
    std::cout << "I dont ever know who am I... (WrongAnimal)" << std::endl;
}

std::string WrongAnimal::getType() const {
    return this->type;
}
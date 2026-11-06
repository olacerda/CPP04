/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:33:05 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 06:18:16 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    this->type = "Animal";
    std::cout << "Animal constructor has been called. Good by!" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor has been called. Good by!" << std::endl;
}

Animal::Animal(const Animal& obj){
    this->type = obj.type;
    std::cout << "Animal copy constructor has been called. Good by!" << std::endl;
}

Animal& Animal::operator=(const Animal& obj){
    this->type = obj.type;
    std::cout << "Animal assignment operator has been called. Good by" << std::endl;
    return *this;
}

std::string Animal::getType() const {
    return this->type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 01:50:24 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 04:00:46 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
    std::cout << "Brain constructor has been called. NEURONS!!!" << std::endl;
}

Brain::~Brain(){
    std::cout << "Brain destructor has been called. NEURONS!!!" << std::endl;
}

Brain::Brain(const Brain& obj){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = obj.ideas[i];
    }
    std::cout << "Brain copy constructor has been called. NEURONS!!!" << std::endl;
}

Brain& Brain::operator=(const Brain& obj){
    for (int i = 0; i < 100; i++){
        this->ideas[i] = obj.ideas[i];
    }
    std::cout << "Brain assignment operator has been called. NEURONS!!!" << std::endl;
    return *this;
}

std::string*    Brain::getIdeas()
{
    return this->ideas;
}
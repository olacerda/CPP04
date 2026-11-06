/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:27:20 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 01:40:49 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
    public:
        Dog();
        ~Dog();
        Dog(const Dog& object);
        Dog& operator=(const Dog& object);

        void    makeSound() const;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:33:19 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 06:18:46 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        virtual ~Animal();
        Animal(const Animal& obj);
        Animal& operator=(const Animal& obj);


        std::string     getType() const;
        virtual void    makeSound() const = 0;

};


#endif
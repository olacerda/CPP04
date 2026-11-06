/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 18:27:20 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 04:00:07 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class Dog : public Animal
{
    private:
        Brain* brain;

    public:
        Dog();
        ~Dog();
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);

        void    makeSound() const;
        Brain&  getBrain();

};

#endif
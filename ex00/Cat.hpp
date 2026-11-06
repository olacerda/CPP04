/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:38:57 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 01:40:55 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <string>
# include <iostream>


class Cat : public Animal
{
    public:
        Cat();
        ~Cat();
        Cat(const Cat& object);
        Cat&    operator=(const Cat& object);

        void    makeSound() const;

};

#endif
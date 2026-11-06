/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:38:57 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 04:00:26 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>
# include <iostream>


class Cat : public Animal
{
    private:
        Brain* brain;

    public:
        Cat();
        ~Cat();
        Cat(const Cat& obj);
        Cat&    operator=(const Cat& obj);

        void    makeSound() const;
        Brain&  getBrain();
};

#endif
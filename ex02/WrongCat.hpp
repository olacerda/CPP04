/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 00:29:31 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 03:59:58 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include "Brain.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
    private:
        Brain* brain;

    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& obj);
        WrongCat& operator=(const WrongCat& obj);

        void        makeSound() const;
        Brain&      getBrain();
};

#endif
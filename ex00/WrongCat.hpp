/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 00:29:31 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 01:44:07 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <iostream>
# include <string>

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat& object);
        WrongCat& operator=(const WrongCat& object);

        void        makeSound() const;

};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 01:48:57 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 04:00:40 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
    private:
        std::string ideas[100];

    public:
        Brain();
        ~Brain();
        Brain(const Brain& obj);
        Brain& operator=(const Brain& obj);

        std::string*    getIdeas();

};

#endif
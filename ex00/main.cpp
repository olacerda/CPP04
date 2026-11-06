/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:32:40 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 02:30:07 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    
    //  ...
    std::cout << "\n";
    delete meta;
    delete j;
    delete i;

    //  --------------------------- Tests with "Wrong" classes -----------------------
    std::cout << "\n\n---------  Now tests with \"Wrong\" classes --------\n\n";

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();

    std::cout << i2->getType() << " " << std::endl;
    i2->makeSound(); //will output the cat sound!
    meta2->makeSound();
    
    //  ...
    std::cout << "\n";
    delete meta2;
    delete i2;

    // ------------------ Personal tests -------------------------------------------
    std::cout << "\n\n------------------ Now personal tests---------------\n\n";

    Cat*    object1 = new Cat();
    Cat*    object2 = new Cat(*object1);
    *object2 = *object1;

    std::cout << "\n" << "Object type: " << object1->getType() << "\n";
    object1->makeSound();
    std::cout << "Object type: " << object2->getType() << "\n";
    object2->makeSound();
    
    std::cout << std::endl;
    delete object1;
    delete object2;

    return 0;
}

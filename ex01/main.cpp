/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olacerda <olacerda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 02:04:26 by olacerda          #+#    #+#             */
/*   Updated: 2026/11/06 06:28:30 by olacerda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <sstream>
#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

std::string get_brain_idea(Animal* animal)
{
    Cat *cat;
    Dog *dog;

    cat = dynamic_cast<Cat*>(animal);
    if (cat)
        return *cat->getBrain().getIdeas();
    dog = dynamic_cast<Dog*>(animal);
    if (dog)
        return *dog->getBrain().getIdeas();
    return "No animal found";
}

void set_brain_idea(Animal *animal, int  index)
{
    std::stringstream temp;
    Cat *cat;
    Dog *dog;

    cat = dynamic_cast<Cat*>(animal);
    temp << index;
    if (cat){
        *cat->getBrain().getIdeas() = "Brain idea number --> " + temp.str();
        return ;
    }
    dog = dynamic_cast<Dog*>(animal);
    if (dog)
        *dog->getBrain().getIdeas() = "Brain idea number --> " + temp.str();
}

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;//should not create a leak
    delete i;
    //    ...

    std::cout << "\n\n---------- Subject + Personal tests-----------------\n\n";
    Animal* array[6];

    for (int i = 0; i < 6; i++){
        if (i < 3){
            array[i] = new Cat();
            set_brain_idea(array[i], i);
        }
        if (i == 3)
            std::cout << "\n Now, second half\n" << std::endl;
        if (i >= 3){
            array[i] = new Dog();
            set_brain_idea(array[i], i);
        }
    }

    std::cout << "\n------------------------- ideas-------------------------\n";
    for (int i = 0; i < 6; i++){
        std::cout << array[i]->getType() << " ---> " << get_brain_idea(array[i]) << ". Sound: ";
        array[i]->makeSound();
    }
    std::cout << "\n";
    for (int i = 0; i < 6; i++){
        delete array[i];
    }
    
    std::cout << "\n\n---------  Tests with \"Wrong\" classes ------------\n\n";
    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* i2 = new WrongCat();

    std::cout << i2->getType() << " " << "\n";
    i2->makeSound(); //will output the cat sound!
    meta2->makeSound();
    
    //  ...
    std::cout << "\n";
    delete meta2;
    delete i2;


    std::cout << "\n-------------------Checking deep copies-----------------\n";
    Cat cat_original;
    Dog dog_original;
    *cat_original.getBrain().getIdeas() = "Cat thinks our planet is beutiful";
    *dog_original.getBrain().getIdeas() = "Dog thinks our planet is beutiful";
    Cat cat_copy(cat_original);
    Dog dog_copy(dog_original);
    
    std::cout << "\n\nbefore:\n";
    std::cout << cat_original.getType() << " ---> " << get_brain_idea(&cat_original) << "\n";
    std::cout << dog_original.getType() << " ---> " << get_brain_idea(&dog_original) << "\n";
    std::cout << "copies:\n";
    std::cout << cat_copy.getType() << " ---> " << get_brain_idea(&cat_copy) << "\n";
    std::cout << dog_copy.getType() << " ---> " << get_brain_idea(&dog_copy) << "\n";

    *cat_copy.getBrain().getIdeas() = "Cat thinks our planet is ugly";
    *dog_copy.getBrain().getIdeas() = "Dog thinks our planet is ugly";

    std::cout << "\nafter: \n";
    std::cout << cat_original.getType() << " ---> " << get_brain_idea(&cat_original) << "\n";
    std::cout << dog_original.getType() << " ---> " << get_brain_idea(&dog_original) << "\n";
    std::cout << "copies: \n";
    std::cout << cat_copy.getType() << " ---> " << get_brain_idea(&cat_copy) << "\n";
    std::cout << dog_copy.getType() << " ---> " << get_brain_idea(&dog_copy) << "\n";
    std::cout << std::endl;
    return 0;
}
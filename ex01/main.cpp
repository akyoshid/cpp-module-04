/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 02:37:28 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 15:43:29 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* animal = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* w_animal = new WrongAnimal();
    const WrongAnimal* w_cat = new WrongCat();
    std::cout << animal->getType() << " " << std::endl;
    animal->makeSound();
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    std::cout << w_animal->getType() << " " << std::endl;
    w_animal->makeSound();
    std::cout << w_cat->getType() << " " << std::endl;
    w_cat->makeSound();
    delete animal;
    delete dog;
    delete cat;
    delete w_animal;
    delete w_cat;
    return 0;
}

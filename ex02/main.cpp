/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 02:37:28 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 19:58:11 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    // std::cout << "=== AANIMAL ===" << std::endl;
    // const AAnimal* animal = new AAnimal();
    // std::cout << animal->getType() << " " << std::endl;
    // animal->makeSound();
    // delete animal;

    std::cout << "=== DOG ===" << std::endl;
    const AAnimal* dog = new Dog();
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();
    delete dog;

    std::cout << "=== CAT ===" << std::endl;
    const AAnimal* cat = new Cat();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    delete cat;

    return 0;
}

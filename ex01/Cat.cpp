/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:07:14 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 18:07:45 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat() : Animal("Cat") {
    brain = new Brain();
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
    brain = new Brain(*src.brain);
    std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
    if (this != &src) {
        Animal::operator=(src);
        brain->copyIdeas(*src.brain);
    }
    std::cout << "Cat: Copy assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat() {
    delete brain;
    std::cout << "Cat: Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat: Meow! Meow!" << std::endl;
}

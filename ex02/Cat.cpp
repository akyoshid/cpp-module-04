/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:07:14 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 19:28:47 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

Cat::Cat() : AAnimal("Cat") {
    brain = new Brain();
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : AAnimal(src) {
    brain = new Brain(*src.brain);
    std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
    if (this != &src) {
        AAnimal::operator=(src);
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

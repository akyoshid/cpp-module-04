/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:47:41 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 19:28:47 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Dog.hpp"
#include "AAnimal.hpp"
#include "Brain.hpp"

Dog::Dog() : AAnimal("Dog") {
    brain = new Brain();
    std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog& src) : AAnimal(src) {
    brain = new Brain(*src.brain);
    std::cout << "Dog: Copy constructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& src) {
    if (this != &src) {
        AAnimal::operator=(src);
        brain->copyIdeas(*src.brain);
    }
    std::cout << "Dog: Copy assignment operator called" << std::endl;
    return *this;
}

Dog::~Dog() {
    delete brain;
    std::cout << "Dog: Destructor called" << std::endl;
}

void Dog::makeSound() const {
    std::cout << "Dog: Woof! Woof!" << std::endl;
}

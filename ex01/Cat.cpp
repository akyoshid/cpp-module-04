/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:07:14 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 15:22:31 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal("Cat") {
    std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src) {
    std::cout << "Cat: Copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& src) {
    if (this != &src)
        Animal::operator=(src);
    std::cout << "Cat: Copy assignment operator called" << std::endl;
    return (*this);
}

Cat::~Cat() {
    std::cout << "Cat: Destructor called" << std::endl;
}

void Cat::makeSound() const {
    std::cout << "Cat: Meow! Meow!" << std::endl;
}

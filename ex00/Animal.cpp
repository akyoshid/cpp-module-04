/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:58:41 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 18:10:24 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

Animal::Animal() : type("unidentified") {
    std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(const std::string& type) : type(type) {
    std::cout << "Animal: String constructor called" << std::endl;
}

Animal::Animal(const Animal& src) : type(src.type){
    std::cout << "Animal: Copy constructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& src) {
    if (this != &src)
        this->type = src.type;
    std::cout << "Animal: Copy assignment operator called" << std::endl;
    return *this;
}

Animal::~Animal() {
    std::cout << "Animal: Destructor called" << std::endl;
}

const std::string& Animal::getType() const {
    return type;
}

void Animal::makeSound() const {
    std::cout
        << "Animal: ...silence... "
        << "(What am I? Who am I? How do I sound?)" << std::endl;
}

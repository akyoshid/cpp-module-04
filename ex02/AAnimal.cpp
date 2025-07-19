/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:58:41 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 18:10:50 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AAnimal.hpp"

AAnimal::AAnimal() : type("unidentified") {
    std::cout << "AAnimal: Default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string& type) : type(type) {
    std::cout << "AAnimal: String constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) : type(src.type){
    std::cout << "AAnimal: Copy constructor called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& src) {
    if (this != &src)
        this->type = src.type;
    std::cout << "AAnimal: Copy assignment operator called" << std::endl;
    return *this;
}

AAnimal::~AAnimal() {
    std::cout << "AAnimal: Destructor called" << std::endl;
}

const std::string& AAnimal::getType() const {
    return type;
}

// void AAnimal::makeSound() const {
//     std::cout
//         << "AAnimal: ...silence... "
//         << "(What am I? Who am I? How do I sound?)" << std::endl;
// }

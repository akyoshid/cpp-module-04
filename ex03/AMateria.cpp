/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:30:55 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/21 01:02:00 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string& type) : type(type), owner(NULL) {
}

AMateria::~AMateria() {
}

const std::string& AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter& target) {
    static_cast<void>(target);
}

void AMateria::setOwner(ICharacter* owner) {
    this->owner = owner;
}

const ICharacter* AMateria::getOwner() const {
    return owner;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:30:55 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/20 23:09:37 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(const std::string& type) : type(type) {
}

AMateria::AMateria(const AMateria& src) : type(src.type) {
}

AMateria& AMateria::operator=(const AMateria& src) {
    if (this != &src)
        type = src.type;
    return *this;
}

AMateria::~AMateria() {
}

const std::string& AMateria::getType() const {
    return type;
}

void AMateria::use(ICharacter& target) {
    static_cast<void>(target);
}

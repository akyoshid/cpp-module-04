/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:59:33 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/20 23:20:45 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure") {
}

Cure::~Cure() {
}

Cure* Cure::clone() const {
    return new Cure();
}

void Cure::use(ICharacter& target) {
    std::cout
        <<  "* heals "
        << target.getName() << "’s wounds *"
        << std::endl;
}

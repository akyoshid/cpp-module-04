/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:50:11 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/20 23:24:12 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
}

Ice::~Ice() {
}

Ice* Ice::clone() const {
    return new Ice();
}

void Ice::use(ICharacter& target) {
    std::cout
        <<  "* shoots an ice bolt at "
        << target.getName() << " *"
        << std::endl;
}

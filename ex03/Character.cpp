/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 07:14:29 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/21 02:31:02 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

Character::Character(const std::string& name) : name(name) {
    std::cout
        << name
        << " joined the world"
        << std::endl;
    for (int i = 0; i < slot_size; ++i)
        slot[i] = NULL;
}

Character::Character(const Character& src) : name(src.name) {
    std::cout
        << name
        << "(copy)"
        << " joined the world"
        << std::endl;
    for (int idx = 0; idx < slot_size; ++idx)
        slot[idx] = NULL;
    copySlot(src);
}

Character& Character::operator=(const Character& src) {
    std::cout
        << name
        << " renamed to "
        << src.name
        << std::endl;
    name = src.name;
    copySlot(src);
    return *this;
}

Character::~Character() {
    for (int idx = 0; idx < slot_size; ++idx) {
        if (slot[idx] != NULL)
            destroyMateria(idx);
    }
    std::cout
        << name
        << " left the world"
        << std::endl;
}

const std::string& Character::getName() const {
    return name;
}

// There is a possibility
//  that 'm' could be dropped on the floor if it cannot be equipped.
// Before calling equip(), the caller should keep a reference to 'm' in memory,
//  and after equip(), check if an Owner has been set using getOwner().
void Character::equip(AMateria* m) {
    int idx = 0;
    if (m == NULL)
        return;
    while (idx < slot_size && slot[idx] != NULL)
        idx++;
    if (idx != slot_size) {
        std::cout
            << name
            << " equipped " << m->getType() << " in slot " << idx
            << std::endl;
        m->setOwner(this);
        slot[idx] = m;
    } else {
        std::cerr
            << name
            << " dropped " << m->getType() << " on the floor (inventory full)"
            << std::endl;
    }
}

// unequip() drops the materia in slot[idx] onto the floor.
// Before calling unequip(),
//  the caller should use getMateria() and retain the Materia in memory,
//  and after unequip(),
//  check that the Owner has been set to NULL using getOwner().
void Character::unequip(int idx) {
    if (idx < 0 || idx >= slot_size) {
        std::cerr << "unequip: invalid slot index: " << idx << std::endl;
        return;
    }
    if (slot[idx] != NULL) {
        std::cout
            << name
            << " dropped " << slot[idx]->getType()
            << " from slot " << idx << " on the floor"
            << std::endl;
        slot[idx]->setOwner(NULL);
        slot[idx] = NULL;
    } else {
        std::cerr
            << name
            << " has no materia equipped in slot " << idx
            << std::endl;
    }
}

void Character::use(int idx, ICharacter& target) {
    if (idx < 0 || idx >= slot_size) {
        std::cerr << "use: invalid slot index: " << idx << std::endl;
        return;
    }
    if (slot[idx] != NULL) {
        std::cout
            << name
            << " used " << slot[idx]->getType()
            << " from slot " << idx << " on " << target.getName()
            << std::endl;
        slot[idx]->use(target);
    } else {
        std::cerr
            << name
            << " has no materia equipped in slot " << idx
            << std::endl;
    }
}

const AMateria* Character::getMateria(int idx) const {
    if (idx < 0 || idx >= slot_size) {
        std::cerr << "getMateria: invalid slot index: " << idx << std::endl;
        return NULL;
    }
    return slot[idx];
}

void Character::copySlot(const Character& src) {
    for (int idx = 0; idx < slot_size; ++idx) {
        if (slot[idx] != NULL)
            destroyMateria(idx);
    }
    for (int idx = 0; idx < slot_size; ++idx) {
        if (src.slot[idx] != NULL)
            equip(src.slot[idx]->clone());
    }
}

void Character::destroyMateria(int idx) {
    if (idx < 0 || idx >= slot_size) {
        std::cerr << "destroyMateria: invalid slot index: " << idx << std::endl;
        return;
    }
    if (slot[idx] != NULL) {
        std::cout
            << name
            << " destroyed and discarded " << slot[idx]->getType()
            << " from slot " << idx
            << std::endl;
        delete slot[idx];
        slot[idx] = NULL;
    } else {
        std::cerr
            << name
            << " has no materia equipped in slot " << idx
            << std::endl;
    }
}

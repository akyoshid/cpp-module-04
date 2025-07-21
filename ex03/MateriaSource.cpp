/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 09:42:42 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/21 02:31:17 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < storage_size; ++i)
        storage[i] = NULL;
}

MateriaSource::~MateriaSource() {
    for (int i = 0; i < storage_size; ++i)
        delete storage[i];
}

void MateriaSource::learnMateria(AMateria* m) {
    int i = 0;
    if (m == NULL)
        return;
    while (i < storage_size && storage[i] != NULL) {
        if (storage[i] == m) {
            std::cerr
                << "MateriaSource already learned this materia"
                << std::endl;
            return;
        }
        i++;
    }
    if (i != storage_size) {
        std::cout
            << "MateriaSource learned " << m->getType() << " materia\n"
            << "Storage usage: "
            << (i + 1) << "/" << storage_size << " slots used"
            << std::endl;
        storage[i] = m;
    } else {
        std::cerr
            << "MateriaSource storage is full\n"
            << "Storage usage: "
            << storage_size << "/" << storage_size << " slots used"
            << std::endl;
        delete m;
    }
}

AMateria* MateriaSource::createMateria(const std::string& type) {
    int i = 0;
    while (i < storage_size && storage[i] != NULL) {
        if (storage[i]->getType().compare(type) == 0) {
            std::cout
                << "MateriaSource created " << type << " materia"
                << std::endl;
            return storage[i]->clone();
        }
        i++;
    }
    std::cerr
        << "MateriaSource can't create " << type << " materia (not learned)"
        << std::endl;
    return 0;
}

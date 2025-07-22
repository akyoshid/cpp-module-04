/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 09:15:19 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/22 07:25:31 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"

int main() {
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Ice()); // MateriaSource storage is full

    Character* red = new Character("\033[1;31mred\033[0m");
    Character* green = new Character("\033[1;32mgreen\033[0m");

    red->w_equip(src->createMateria("ice"));
    green->w_equip(src->createMateria("ice"));
    red->w_equip(src->createMateria("cure"));
    green->w_equip(src->createMateria("cure"));

    AMateria* tmp = src->createMateria("fire");  // cannot create (not learned)
    tmp = src->createMateria("ice");
    red->w_equip(tmp);
    red->w_equip(tmp);  // cannot equip (already equipped)
    green->w_equip(tmp);  // cannot equip (already equipped by red)

    red->w_equip(src->createMateria("ice"));
    red->w_equip(src->createMateria("ice"));  // cannot equip (inventory full)

    red->w_unequip(3);
    red->w_unequip(3);  // no materia equipped in slot 3
    red->w_unequip(4);  // invalid slot index

    Character* copy = new Character(*red);
    *copy = *green;

    red->use(0, *green);
    green->use(1, *red);
    red->use(3, *green);  // no materia equipped in slot 3
    red->use(4, *green);  // invalid slot index

    delete copy;
    delete green;
    delete red;
    delete src;
    return 0;
}

// int main() {
//     IMateriaSource* src = new MateriaSource();
//     src->learnMateria(new Ice());
//     src->learnMateria(new Cure());
//     ICharacter* me = new Character("me");
//     AMateria* tmp;
//     tmp = src->createMateria("ice");
//     me->equip(tmp);
//     tmp = src->createMateria("cure");
//     me->equip(tmp);
//     ICharacter* bob = new Character("bob");
//     me->use(0, *bob);
//     me->use(1, *bob);
//     delete bob;
//     delete me;
//     delete src;
//     return 0;
// }

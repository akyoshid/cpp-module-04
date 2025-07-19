/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 02:37:28 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 19:13:36 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    std::cout << "=== DEFAULT CONSTRUCTOR ===" << std::endl;
    Dog super_dog;
    Cat super_cat;

    std::cout << "\n=== COPY CONSTRUCTOR ===" << std::endl;
    Animal* pack[4];
    for (int i = 0; i < 2; ++i)
        pack[i] = new Dog(super_dog);
    for (int i = 0; i < 2; ++i)
        pack[i + 2] = new Cat(super_cat);

    std::cout << "\n=== DESTRUCTOR ===" << std::endl;
    for (int i = 0; i < 4; ++i)
        delete pack[i];

    std::cout << "\n=== DEFAULT CONSTRUCTOR ===" << std::endl;
    Dog copy_dog;
    Cat copy_cat;

    std::cout << "\n=== COPY ASSIGNMENT OPERATOR ===" << std::endl;
    copy_dog = super_dog;
    copy_cat = super_cat;

    std::cout << "\n=== DESTRUCTOR ===" << std::endl;
    return 0;
}

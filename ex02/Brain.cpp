/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:52:39 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 17:59:00 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain: Default constructor called" << std::endl;
}

Brain::Brain(const Brain& src) {
    copyIdeas(src);
    std::cout << "Brain: Copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& src) {
    if (this != &src)
        copyIdeas(src);
    std::cout << "Brain: Copy assignment operator called" << std::endl;
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain: Destructor called" << std::endl;
}

void Brain::copyIdeas(const Brain& src) {
    for (int i = 0; i < storage_size; ++i)
        ideas[i] = src.ideas[i];
    std::cout << "Brain: copyIdeas() called" << std::endl;
}

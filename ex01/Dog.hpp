/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:00:21 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 17:08:15 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_DOG_HPP_
# define EX01_DOG_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
 public:
    Dog();
    Dog(const Dog& src);
    Dog& operator=(const Dog& src);
    ~Dog();
    void makeSound() const;
 private:
    Brain* brain;
};

#endif

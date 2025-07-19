/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:00:21 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 19:28:47 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_DOG_HPP_
# define EX02_DOG_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal {
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

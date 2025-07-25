/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:01:25 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 17:07:47 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_CAT_HPP_
# define EX01_CAT_HPP_

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
 public:
    Cat();
    Cat(const Cat& src);
    Cat& operator=(const Cat& src);
    ~Cat();
    void makeSound() const;
 private:
    Brain* brain;
};

#endif

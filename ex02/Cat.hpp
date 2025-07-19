/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:01:25 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 19:28:47 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_CAT_HPP_
# define EX02_CAT_HPP_

# include "AAnimal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal {
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

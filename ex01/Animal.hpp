/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:58:55 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 15:53:05 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_ANIMAL_HPP_
# define EX01_ANIMAL_HPP_

# include <string>

class Animal {
 public:
    Animal();
    Animal(const std::string& type);
    Animal(const Animal& src);
    Animal& operator=(const Animal& src);
    virtual ~Animal();
    const std::string& getType() const;
    virtual void makeSound() const;
 protected:
    std::string type;
};

#endif

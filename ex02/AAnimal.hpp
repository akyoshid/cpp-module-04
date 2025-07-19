/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:58:55 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 19:25:31 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX02_AAnimal_HPP_
# define EX02_AAnimal_HPP_

# include <string>

class AAnimal {
 public:
    AAnimal();
    AAnimal(const std::string& type);
    AAnimal(const AAnimal& src);
    AAnimal& operator=(const AAnimal& src);
    virtual ~AAnimal();
    const std::string& getType() const;
    // virtual void makeSound() const;
    virtual void makeSound() const = 0;
 protected:
    std::string type;
};

#endif

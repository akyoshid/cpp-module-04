/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:58:55 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 15:54:00 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_WRONGANIMAL_HPP_
# define EX01_WRONGANIMAL_HPP_

# include <string>

class WrongAnimal {
 public:
    WrongAnimal();
    WrongAnimal(const std::string& type);
    WrongAnimal(const WrongAnimal& src);
    WrongAnimal& operator=(const WrongAnimal& src);
    virtual ~WrongAnimal();
    const std::string& getType() const;
    void makeSound() const;
 protected:
    std::string type;
};

#endif

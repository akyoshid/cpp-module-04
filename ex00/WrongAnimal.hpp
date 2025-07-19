/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 13:58:55 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 23:24:39 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WRONGANIMAL_HPP_
# define EX00_WRONGANIMAL_HPP_

# include <string>

class WrongAnimal {
 public:
    WrongAnimal();
    explicit WrongAnimal(const std::string& type);
    WrongAnimal(const WrongAnimal& src);
    WrongAnimal& operator=(const WrongAnimal& src);
    virtual ~WrongAnimal();
    const std::string& getType() const;
    void makeSound() const;
 protected:
    std::string type;
};

#endif

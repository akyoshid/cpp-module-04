/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:38:42 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/21 01:01:27 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_AMATERIA_HPP_
# define EX03_AMATERIA_HPP_

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {
 public:
    explicit AMateria(const std::string& type);
    virtual ~AMateria();
    const std::string& getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    void setOwner(ICharacter* owner);
    const ICharacter* getOwner() const;
 protected:
    std::string type;
    ICharacter *owner;
 private:
    AMateria();  // = delete;
    AMateria(const AMateria& src);  // = delete;
    AMateria& operator=(const AMateria& src);  // = delete;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 21:38:42 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/20 23:29:31 by akyoshid         ###   ########.fr       */
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
 protected:
    std::string type;
 private:
    AMateria();  // = delete;
    AMateria(const AMateria& src);  // = delete;
    AMateria& operator=(const AMateria& src);  // = delete;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:17:45 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/20 23:23:30 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_ICE_HPP_
# define EX03_ICE_HPP_

# include <string>
# include "AMateria.hpp"

class Ice : public AMateria {
 public:
    Ice();
    ~Ice();
    Ice* clone() const;
    void use(ICharacter& target);
 private:
    Ice(const Ice& src);  // = delete;
    Ice& operator=(const Ice& src);  // = delete;
};

#endif

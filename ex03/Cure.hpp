/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:58:13 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/20 23:23:25 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_CURE_HPP_
# define EX03_CURE_HPP_

# include <string>
# include "AMateria.hpp"

class Cure : public AMateria {
 public:
    Cure();
    ~Cure();
    Cure* clone() const;
    void use(ICharacter& target);
 private:
    Cure(const Cure& src);  // = delete;
    Cure& operator=(const Cure& src);  // = delete;
};

#endif

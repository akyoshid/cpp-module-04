/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 00:15:05 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/21 09:14:34 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_CHARACTER_HPP_
# define EX03_CHARACTER_HPP_

# include <string>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {
 public:
    explicit Character(const std::string& name);
    Character(const Character& src);
    Character& operator=(const Character& src);
    ~Character();
    const std::string& getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
    void w_equip(AMateria* m);
    void w_unequip(int idx);
    AMateria* getMateria(int idx);
    static const int slot_size = 4;
 private:
    void destroyMateria(int idx);
    void copySlot(const Character& src);
    std::string name;
    AMateria* slot[slot_size];
    Character();  // = delete;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 07:24:55 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/20 09:43:30 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_MATERIASOURCE_HPP_
# define EX03_MATERIASOURCE_HPP_

# include <string>
# include <iostream>
# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource {
 public:
    MateriaSource();
    ~MateriaSource();
    void learnMateria(AMateria* m);
    AMateria* createMateria(const std::string& type);
    static const int storage_size = 4;
 private:
    AMateria* storage[storage_size];
    MateriaSource(const MateriaSource& src);  // = delete
    MateriaSource& operator=(const MateriaSource& src);  // = delete
};

#endif

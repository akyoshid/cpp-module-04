/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 07:23:06 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/20 09:13:17 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_IMATERIASOURCE_HPP_
# define EX03_IMATERIASOURCE_HPP_

# include <string>
# include "AMateria.hpp"

class IMateriaSource {
 public:
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(const std::string& type) = 0;
};

#endif

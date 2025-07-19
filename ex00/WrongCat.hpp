/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 14:01:25 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 15:35:24 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_WRONGCAT_HPP_
# define EX00_WRONGCAT_HPP_

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
 public:
    WrongCat();
    WrongCat(const WrongCat& src);
    WrongCat& operator=(const WrongCat& src);
    ~WrongCat();
    void makeSound() const;
};

#endif

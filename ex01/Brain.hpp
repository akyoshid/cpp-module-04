/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:53:16 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/19 17:58:58 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX01_BRAIN_HPP_
# define EX01_BRAIN_HPP_

# include <string>

class Brain {
 public:
    Brain();
    Brain(const Brain& src);
    Brain& operator=(const Brain& src);
    ~Brain();
    void copyIdeas(const Brain& src);
    static const int storage_size = 100;
 private:
    std::string ideas[storage_size];
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:27:23 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/19 09:37:23 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {
    public : 

    FragTrap();
    FragTrap(const std::string& name);
    FragTrap(const FragTrap& N);
    ~FragTrap();
    FragTrap& operator=(const FragTrap& name);
    void highFivesGuys();
};



#endif
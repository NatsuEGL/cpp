/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:31:47 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/19 09:52:10 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(){

//   ClapTrap claptrap("CL4P-TP");
//     claptrap.attack("Bandit");
//     claptrap.takeDamage(5);
//     claptrap.beRepaired(3);
//     std::cout << std::endl;
    FragTrap fragtrap("Frag");
    fragtrap.attack("Enemy");
    fragtrap.highFivesGuys();
    std::cout << std::endl;
    return (0);
}
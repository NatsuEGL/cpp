/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 11:31:47 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/19 09:51:58 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(){

    ClapTrap claptrap("Clap");
    claptrap.attack("Bandit");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    std::cout << std::endl;
    ScavTrap scavtrap("Scav");
    scavtrap.attack("Vault Hunter");
    scavtrap.guardGate(); 
    return (0);
}
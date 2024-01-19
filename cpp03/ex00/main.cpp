/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:37 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/19 09:51:40 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main(){

    ClapTrap claptrap("Clap");

    claptrap.attack("Bandit");
    claptrap.takeDamage(5);
    claptrap.beRepaired(3);
    return (0);
}
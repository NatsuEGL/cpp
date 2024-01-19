/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akaabi <akaabi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:50:32 by akaabi            #+#    #+#             */
/*   Updated: 2024/01/18 12:24:23 by akaabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& N): Name(N) , HitPoints(10), EnergyPoints(10), AttackDamage(0){
    std::cout << "Parameterized Constructor !!" << std::endl;
}

ClapTrap::ClapTrap(): Name("Default") , HitPoints(10), EnergyPoints(10), AttackDamage(0){
    std::cout << "Default Constructor !!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& N){
    std::cout << "Copy Constructor !!" << std::endl;
    Name = N.Name;
    HitPoints = N.HitPoints;
    EnergyPoints = N.EnergyPoints;
    AttackDamage = N.AttackDamage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& N)
{
    std::cout << "Copy assignement operator !!" << std::endl;
    if (this != &N)
    {
        Name = N.Name;
        HitPoints = N.HitPoints;
        EnergyPoints = N.EnergyPoints;
        AttackDamage = N.AttackDamage;   
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "the Destructor call " << std::endl;
}

void ClapTrap::attack(const std::string& target) {
    if (HitPoints > 0 && EnergyPoints > 0) {
        std::cout << "ClapTrap " << Name << " attacks " << target << ", causing "
                  << AttackDamage << " points of damage!" << std::endl;
        EnergyPoints--;
    }
    else
        std::cout << "ClapTrap " << Name << " can't attack. Not enough hit points or energy." << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (HitPoints > 0) {
        std::cout << "ClapTrap " << Name << " takes " << amount << " points of damage!" << std::endl;
        HitPoints = (amount > HitPoints) ? 0 : HitPoints - amount;
    } else {
        std::cout << "ClapTrap " << Name << " can't take more damage. No hit points left." << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (HitPoints > 0) {
        std::cout << "ClapTrap " << Name << " is being repaired, gaining " << amount << " hit points!" << std::endl;
        HitPoints += amount;
        EnergyPoints--;
    } else {
        std::cout << "ClapTrap " << Name << " can't be repaired. No hit points left." << std::endl;
    }
}
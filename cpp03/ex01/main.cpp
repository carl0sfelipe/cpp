/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 16:42:52 by dioda-si          #+#    #+#             */
/*   Updated: 2023/08/10 16:54:09 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    // Criar uma instância de ScavTrap
    ScavTrap scavTrap("GateKeeper");

    // Testar os métodos da classe ScavTrap
    scavTrap.attack("Enemy1");
    scavTrap.takeDamage(25);
    scavTrap.takeDamage(25);
    scavTrap.takeDamage(100);
    scavTrap.beRepaired(10);
    scavTrap.guardGate();

    // Testar os getters e setters da classe ScavTrap
    std::cout << "Name: " << scavTrap.getName() << std::endl;
    std::cout << "Hit Points: " << scavTrap.getHitPoints() << std::endl;
    std::cout << "Energy Points: " << scavTrap.getEnergyPoints() << std::endl;
    std::cout << "Attack Damage: " << scavTrap.getAttackDamage() << std::endl;

    // Criar uma cópia de ScavTrap
    ScavTrap scavCopy(scavTrap);
    scavCopy.attack("Enemy2");
    scavCopy.guardGate();

    // Atribuir uma cópia a outra instância de ScavTrap
    ScavTrap scavAssign;
    scavAssign = scavTrap;
    scavAssign.attack("Enemy3");
    scavAssign.guardGate();

    return 0;
}

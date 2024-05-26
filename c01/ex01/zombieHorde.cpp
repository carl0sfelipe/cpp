/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:33:07 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/26 16:33:08 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];  // Aloca uma horda de zumbis
    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);  // Inicializa cada zumbi com o nome fornecido
    }
    return horde;
}

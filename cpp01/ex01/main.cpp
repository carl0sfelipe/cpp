/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csiqueir <csiqueir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 16:33:32 by csiqueir          #+#    #+#             */
/*   Updated: 2024/05/26 16:36:19 by csiqueir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int N = 5;
    std::string name = "Zombie";

    // Cria uma horda de N zumbis
    Zombie* horde = zombieHorde(N, name);

    // Faz com que cada zumbi na horda se anuncie
    for (int i = 0; i < N; ++i) {
        horde[i].announce();
    }

    // Libera a memória alocada para a horda
    delete[] horde;

    return 0;
}

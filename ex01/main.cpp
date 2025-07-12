/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:45:28 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 18:06:11 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main() {
    int n = 4;
    Zombie* horde = zombieHorde(n, "sexyzombie");
    for (int i = 0; i < n; ++i) {
        horde[i].announce();
    }
    delete[] horde;
    return 0;
}

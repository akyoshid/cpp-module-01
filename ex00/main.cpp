/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 14:45:28 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 16:43:41 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    Zombie* red;
    Zombie* green;

    red = newZombie("red");
    green = newZombie("green");
    randomChump("blue");
    randomChump("pikachu");
    delete red;
    delete green;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 13:06:12 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 18:00:20 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {
}

Zombie::~Zombie() {
    announce_destroyed();
}

void Zombie::set_name(std::string name) {
    this->name = name;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::announce_destroyed() {
    std::cout << name << ": Destroyed" << std::endl;
}

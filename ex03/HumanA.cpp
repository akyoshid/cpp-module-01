/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:34:26 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 21:03:11 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(const std::string name, Weapon& weapon)
    : name(name), weapon(weapon) {
}

HumanA::~HumanA() {
}

void HumanA::setWeapon(Weapon& weapon) {
    this->weapon = weapon;
}

void HumanA::attack() const {
    std::cout
        << name
        << " attacks with their "
        << weapon.getType()
        << std::endl;
}

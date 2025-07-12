/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:34:24 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 21:10:29 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(const std::string name) : name(name), weapon(NULL) {
}

HumanB::~HumanB() {
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}

void HumanB::attack() const {
    std::cout << name << " attacks with their ";
    if (weapon != NULL)
        std::cout << (*weapon).getType() << std::endl;
    else
        std::cout << "hands" << std::endl;
}

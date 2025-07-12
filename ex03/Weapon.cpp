/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:34:33 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 21:16:08 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(std::string str) {
    type = str;
}

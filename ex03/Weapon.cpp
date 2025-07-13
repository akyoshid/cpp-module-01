/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:34:33 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/13 15:13:47 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {
}

Weapon::~Weapon() {
}

const std::string& Weapon::getType() const {
    return type;
}

void Weapon::setType(const std::string& str) {
    type = str;
}

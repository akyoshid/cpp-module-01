/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:28:45 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/13 14:55:56 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::complain(std::string level) {
    std::string logLevel[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4 && logLevel[i].compare(level))
        i++;
    switch (i) {
        case 0:
            debug();
            // FALLTHROUGH
        case 1:
            info();
            // FALLTHROUGH
        case 2:
            warning();
            // FALLTHROUGH
        case 3:
            error();
            break ;
        default:
            inaudible_complain();
    }
}

void Harl::inaudible_complain() {
    std::cout
        << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Harl::debug(void) {
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout
        << "I love having extra bacon for my "
        << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n"
        << "I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "[ INFO ]" << std::endl;
    std::cout
        << "I cannot believe adding extra bacon costs more money.\n"
        << "You didn’t put enough bacon in my burger!\n"
        << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "[ WARNING ]" << std::endl;
    std::cout
        << "I think I deserve to have some extra bacon for free.\n"
        << "I’ve been coming for years, "
        << "whereas you started working here just last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "[ ERROR ]" << std::endl;
    std::cout
        << "This is unacceptable!\n"
        << "I want to speak to the manager now." << std::endl;
}

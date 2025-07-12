/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 17:37:59 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 18:07:40 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* temp = new Zombie[N];
    for (int i = 0; i < N; ++i) {
        temp[i].set_name(name);
    }
    return temp;
}

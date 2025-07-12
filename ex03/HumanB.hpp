/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:34:30 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 21:11:19 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANB_HPP_
# define EX03_HUMANB_HPP_

# include <string>
# include "Weapon.hpp"

class HumanB {
 public:
    explicit HumanB(const std::string name);
    ~HumanB();
    void setWeapon(Weapon& weapon);
    void attack() const;
 private:
    std::string name;
    Weapon* weapon;
};

#endif

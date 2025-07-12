/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:34:28 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 21:04:59 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_HUMANA_HPP_
# define EX03_HUMANA_HPP_

# include <string>
# include "Weapon.hpp"

class HumanA {
 public:
    explicit HumanA(const std::string name, Weapon& weapon);
    ~HumanA();
    void setWeapon(Weapon& weapon);
    void attack() const;
 private:
    std::string name;
    Weapon &weapon;
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:34:34 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 21:16:41 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX03_WEAPON_HPP_
# define EX03_WEAPON_HPP_

# include <string>

class Weapon {
 public:
    explicit Weapon(std::string type);
    ~Weapon();
    const std::string& getType() const;
    void setType(std::string str);
 private:
    std::string type;
};

#endif

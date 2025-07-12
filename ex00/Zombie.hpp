/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 12:49:51 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 14:57:51 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX00_ZOMBIE_HPP_
# define EX00_ZOMBIE_HPP_

# include <string>

class	Zombie {
	public:
		Zombie(std::string name);
		~Zombie();
	private:
		std::string	name;
		void		announce();
		void		announce_destroyed();
		Zombie();
};

#endif

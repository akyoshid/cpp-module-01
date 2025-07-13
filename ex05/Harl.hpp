/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:28:59 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/13 14:27:15 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX05_HARL_HPP_
# define EX05_HARL_HPP_

# include <string>

class Harl {
 public:
    Harl();
    ~Harl();
    void complain(std::string level);
    void inaudible_complain();
 private:
    void debug();
    void info();
    void warning();
    void error();
    typedef void (Harl::*t_log_f)();
};

#endif

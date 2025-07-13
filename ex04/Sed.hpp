/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:54:59 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/13 13:20:16 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EX04_SED_HPP_
# define EX04_SED_HPP_

# include <string>
# include <fstream>

class Sed {
 public:
    Sed(const std::string& ifn,
        const std::string& str_search, const std::string& str_replace);
    ~Sed();
    bool execute();
 private:
    std::string ifn;
    std::string ofn;
    std::string str_search;
    std::string str_replace;
    std::ifstream ifs;
    std::ofstream ofs;
    bool open_input_file();
    bool open_output_file();
    std::string* replace(std::string* line);
};

#endif

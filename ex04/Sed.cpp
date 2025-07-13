/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 13:02:46 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/13 19:48:51 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include "Sed.hpp"

Sed::Sed(const std::string& ifn,
    const std::string& str_search, const std::string& str_replace)
    : ifn(ifn), ofn(ifn + ".replace"),
    str_search(str_search), str_replace(str_replace) {
}

Sed::~Sed() {
}

bool Sed::execute() {
    if (!open_input_file() || !open_output_file())
        return (false);
    std::string line;
    while (std::getline(ifs, line)) {
        ofs << replace(line);
        if (!ifs.eof())
            ofs << '\n';
        if (ofs.fail()) {
            std::cerr
                << "sed: can't write to output file: " << ofn << std::endl;
            return (false);
        }
    }
    if (ifs.bad()) {
        std::cerr
            << "sed: can't read from input file: " << ifn << std::endl;
        return false;
    }
    ifs.close();
    ofs.close();
    return true;
}

bool Sed::open_input_file() {
    ifs.open(ifn.c_str());
    if (!ifs.is_open()) {
        std::cerr
            << "sed: can't open input file: " << ifn
            << std::endl;
        return (false);
    }
    return (true);
}

bool Sed::open_output_file() {
    ofs.open(ofn.c_str());
    if (!ofs.is_open()) {
        std::cerr
            << "sed: can't open output file: " << ofn
            << std::endl;
        return (false);
    }
    return (true);
}

std::string Sed::replace(const std::string &line) const {
    if (str_search.empty() || str_search == str_replace)
        return line;
    std::string result;
    result.reserve(line.length() * 2);
    size_t start_pos = 0;
    size_t match_pos = 0;
    while (std::string::npos
        != (match_pos = line.find(str_search, start_pos))) {
        result.append(line, start_pos, match_pos - start_pos);
        result.append(str_replace);
        start_pos = match_pos + str_search.length();
    }
    result.append(line, start_pos);
    return result;
}

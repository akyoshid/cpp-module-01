/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 10:22:17 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/13 13:15:55 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sed.hpp"

namespace {
    int print_misuse() {
        std::cerr << "Usage: sed [input-file] [search] [replace]" << std::endl;
        return 2;
    }
}

int main(int argc, char *argv[]) {
    if (argc != 4)
        return print_misuse();
    Sed sed_inst(argv[1], argv[2], argv[3]);
    if (sed_inst.execute())
        return 0;
    else
        return 1;
}

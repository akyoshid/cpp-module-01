/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akyoshid <akyoshid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/12 19:14:37 by akyoshid          #+#    #+#             */
/*   Updated: 2025/07/12 19:31:15 by akyoshid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main() {
    std::string string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout
        << "memory address of the string variable: " << &string << std::endl
        << "memory address held by stringPTR     : " << stringPTR << std::endl
        << "memory address held by stringREF     : " << &stringREF << std::endl
        << "value of the string variable         : " << string << std::endl
        << "value pointed to by stringPTR        : " << *stringPTR << std::endl
        << "value pointed to by stringREF        : " << stringREF << std::endl;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 01:55:27 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/26 01:55:34 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main (void)
{
    std::string string = "HI THIS IS BRAIN";
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    // Printing the memory addresses
    std::cout << &string << ": Address of string variable " << std::endl;
    std::cout << stringPTR <<  ": Address held by stringPTR " << std::endl;
    std::cout << &stringREF << ": Address held by stringREF" << std::endl;

    // Printing the values
    std::cout << string << ": Value of string variable " << std::endl;
    std::cout << *stringPTR << ": Value pointed to by stringPTR"  << std::endl;
    std::cout << stringREF << ": Value pointed to by stringREF" << std::endl;

    return 0;
}

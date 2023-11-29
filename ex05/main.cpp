/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 08:50:51 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/28 08:50:53 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

#include <iostream>
#include "Harl.hpp"

int main()
{
    Harl harl;

    std::cout << RED << "\n\nTest DEBUG:" << RESET << std::endl;
    harl.complain("DEBUG");

    std::cout << RED << "\n\nTest INFO:" << RESET << std::endl;
    harl.complain("INFO");

    std::cout << RED << "\n\nTest WARNING:" << RESET << std::endl;
    harl.complain("WARNING");

    std::cout << RED << "\n\nTest ERROR:" << RESET << std::endl;
    harl.complain("ERROR");

    return 0;
}

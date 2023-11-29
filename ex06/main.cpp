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

int main(int argc, char **argv)
{
    Harl harl;

    if(argc != 2)
    {
        std::cout << "to much or not enoughe arguments. ./harlFilter + string1 " << std::endl;
        return 1;
    }
    else
    {
        harl.complain(argv[1]);
    }
    return 0;
}

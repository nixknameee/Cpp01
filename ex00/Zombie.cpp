/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:55:39 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/24 15:55:43 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie::Zombie(std::string name)
{
    this->p_name = name;
}

Zombie::~Zombie()
{
     std::cout << p_name << ": Got killed." << std::endl;
}

void    Zombie::announce()
{
    std::cout << p_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

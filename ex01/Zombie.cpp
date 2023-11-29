/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 23:45:37 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/25 23:45:39 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{

}


Zombie::~Zombie()
{
    std::cout << this->p_name << ": End of Zombie" << std::endl;
}
Zombie::Zombie( std::string name)
{
	p_name = name;
}

void Zombie::announce() const
{
    std::cout << this->p_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setZombie(std::string name)
{
    this->p_name = name;
}

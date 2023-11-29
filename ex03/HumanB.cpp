/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:45:51 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/26 02:45:54 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string p_name): p_name(p_name)
{

}

HumanB::~HumanB()
{

}

void    HumanB::attack(void) const
{
  
    std::cout << this->p_name << " attacks with their " << this->p_weapon->getType() << std::endl;

}

bool    HumanB::setWeapon(Weapon& newWeapon)
{
    this->p_weapon = &newWeapon;
    return (true);
}

Weapon  HumanB::getWeapon(void) const
{
    return(*this->p_weapon);

}

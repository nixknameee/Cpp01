/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:45:24 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/26 02:45:28 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string p_name, Weapon &p_weapon): p_name(p_name), p_weapon(p_weapon)
{

}

HumanA::~HumanA()
{
    
}

void    HumanA::attack(void)
{
    std::cout << this->p_name << " attacks with their" << this->p_weapon.getType() << std::endl;
}

Weapon&  HumanA::getWeapon(void)
{
    return(this->p_weapon);
}

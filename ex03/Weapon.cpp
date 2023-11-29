/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:44:35 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/26 02:44:39 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
    this->setType(type);
}

Weapon::~Weapon()
{

}

const std::string&   Weapon::getType(void)
{
    return(this->type);
}

void    Weapon::setType(std::string newType)
{
    this->type = newType;
}

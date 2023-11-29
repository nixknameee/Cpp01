/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:46:00 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/26 02:46:03 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    private:
        std::string p_name;
        Weapon     *p_weapon;

    public:

        HumanB(std::string p_name);
        ~HumanB();

        void    attack(void) const;
        bool    setWeapon(Weapon& newWeapon);
        Weapon  getWeapon(void) const;
};


#endif

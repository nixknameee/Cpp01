/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:45:32 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/26 02:45:35 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

class HumanA
{
    private:
        std::string p_name;
        Weapon     &p_weapon;

    public:

        HumanA(std::string p_name, Weapon &p_weapon);
        ~HumanA();

        void    attack(void);
        Weapon&  getWeapon(void);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 02:44:44 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/26 02:44:49 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>

class Weapon
{
    private:
        std::string type;
    
    public:
        Weapon(std::string type);
        void    setType(std::string newType);
        const std::string&   getType(void);
        
        ~Weapon();
};




#endif

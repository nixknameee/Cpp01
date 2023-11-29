/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 23:45:46 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/25 23:45:48 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP


#include <iostream>

class Zombie
{
    private:

        std::string p_name;


    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce() const;
        void setZombie(std::string name);
};

Zombie*    zombieHorde( int N, std::string name );




#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:55:33 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/24 15:55:35 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <sstream>
#include <iostream>

class Zombie
{
        private:
        
        std::string p_name;
        
        public:
        Zombie(std::string name);
        void announce( void );
        Zombie();
        ~Zombie();

};

void randomChump(std::string name);
Zombie* newZombie( std::string name );


#endif

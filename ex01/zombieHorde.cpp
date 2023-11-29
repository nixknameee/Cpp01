/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngjokaj <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 23:46:29 by ngjokaj           #+#    #+#             */
/*   Updated: 2023/11/25 23:46:31 by ngjokaj          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde( int N, std::string name )
{
    if(N < 0)
    {
        std::cout << "please use positive values" << std::endl;
        return NULL;

    }
    Zombie* band = new Zombie[N];

    for (int  i = 0; i < N; i++)
    {
        band[i].setZombie(name);
    }
    return band;
    
}
